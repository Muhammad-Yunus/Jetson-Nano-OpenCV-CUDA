#include <iostream>

int main(){
    int ccount;	        //Bad	What does the c before “count” stand for?
    int customerCount;	//Good	Clear what we’re counting
    int i;	            //Either	Okay if use is trivial, bad otherwise
    int index;	        //Either	Okay if obvious what we’re indexing
    int totalScore;	    //Either	Okay if there’s only one thing being scored, otherwise too ambiguous
    int _count;	        //Bad	Do not start names with underscore
    int count;	        //Either	Okay if obvious what we’re counting
    int data;	        //Bad	What kind of data?
    int time;	        //Bad	Is this in seconds, minutes, or hours?
    int minutesElapsed;	//Good	Descriptive
    int value1, value2;	//Either	Can be hard to differentiate between the two
    int numApples;	    //Good	Descriptive
    int monstersKilled;	//Good	Descriptive
    int x, y;	        //Either	Okay if use is trivial, bad otherwise
    
    // holds number of chars in a piece of text -- including whitespace and punctuation!
    int numberOfChars;

    return 0;
}