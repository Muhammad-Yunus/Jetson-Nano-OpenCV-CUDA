# 1. Build and install OpenCV on your computer
- Install OpenCV 4.5.3 in Jetson Nano by referring to this tutorial :
    - [https://yunusmuhammad007.medium.com/build-and-install-opencv-4-5-3-on-jetson-nano-with-cuda-opencl-opengl-and-gstreamer-enable-6dc7141be272](https://yunusmuhammad007.medium.com/build-and-install-opencv-4-5-3-on-jetson-nano-with-cuda-opencl-opengl-and-gstreamer-enable-6dc7141be272)
- Setup VSCode Remote Development for Jetson Nano by referring to this tutorial :
    - [https://yunusmuhammad007.medium.com/6-jetson-nano-visual-studio-code-remote-development-b6f08138be61](https://yunusmuhammad007.medium.com/6-jetson-nano-visual-studio-code-remote-development-b6f08138be61)
- Install `C/C++` and `Code Runner` VS Code Extension in Jetson Nano.
- Configure `code-runner.executorMap` in VS Code `setting.json`, change `cpp` executor command to,
    ```
    "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt -std=c++11 `pkg-config --cflags --libs opencv4` && $dir$fileNameWithoutExt",
    ```
- Then configure `code-runner` extension,
    - Open `file > preferences > Settings > Extentions > code-runner`
    - Scroll down to `code-runner.runInTerminal`
    - Change to `true`.
- Configuring `C/C++` extension,
    - Open `file > preferences > Settings > Extentions > C/C++`
    - Scroll down to `C_Cpp › Default: Intelli Sense Mode`
    - Change to `linux-gcc-arm64` for Jetson Nano
    - Then, scroll down again to `C_Cpp.intelliSenseEngine`
    - Change to `Tag Parser`