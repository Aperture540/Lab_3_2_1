/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on September 18, 2017, 2:50 PM
 */

#include <iostream>

using namespace std;

int main(void) {

    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int n = sizeof (vector) / sizeof (vector[0]);
    int smallestNumber, *p = vector;
    
    smallestNumber = *p;
    
    for(int count = 0; count < n; count++)
    {
        if(smallestNumber > *p)
        {
            smallestNumber = *p;
        }
        *p++;
    }
    
    cout<<"The smallest number is "<<smallestNumber<<"."<<endl;
     
    return 0;
}
