import cv2
from gst_cam import camera

# 1.1 Background Segmentation MOG using CUDA
mog = cv2.cuda.createBackgroundSubtractorMOG2()
w, h = 720, 640
cap = cv2.VideoCapture(camera(0, w, h))
src = cv2.cuda_GpuMat()

while cap.isOpened():
    ret, frame = cap.read()
    if not ret : 
        break
    e1 = cv2.getTickCount()

    src.upload(frame)
    dst = mog.apply(src, learningRate=0.1, stream=cv2.cuda_Stream.Null())
    result = dst.download()

    e2 = cv2.getTickCount()
    time = (e2 - e1)/ cv2.getTickFrequency()
    print("execution time %.4fs" % time)
    cv2.imshow('frame', result)
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break

cap.release()
cv2.destroyAllWindows()
