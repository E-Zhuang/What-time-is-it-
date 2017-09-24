//
//  main.c
//  What time is it?
//
//  This program calculates the and displays how many days, hours,
//  minutes, and seconds are contained in a user-input amount of seconds.
//
//  Created by Emily Zhuang on 9/23/17.
//  Copyright © 2017 Emily Zhuang. All rights reserved.
//

#include <stdio.h>

int main()
{
    //declare variables
    int init_sec;
    int sec;
    int min;
    int hr;
    int day;
    
    //prompt user for number of seconds and input data
    printf("Enter the amount of seconds desired: ");
    scanf("%i", &init_sec);
    sec = init_sec;
    
    //calculate for num of days, hours, minutes, and seconds
    day = sec / (60 * 60 * 24);
    sec %= (60 * 60 * 24);
    hr = sec / (60 * 60);
    sec %= (60 * 60);
    min = sec / 60;
    sec %= 60;
    
    //output results
    printf("In %i seconds, there are: \n", init_sec);
    printf("Days %i\n", day);
    printf("Hours %i\n", hr);
    printf("Minutes %i\n", min);
    printf("Seconds %i\n", sec);
    
    return 0;
}
