/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 6:40 PM
 * Purpose: Find the average of values
 */

//System Libraries
#include <iostream> //Input-Output library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    unsigned short a,b,c,d,e,sum;
    float ttl,avg;
    //Initialize all variables
    a=28;
    b=32;
    c=37;
    d=24;
    e=33;
    ttl=5; //Number of variables to divide the sum by
    //Process or map solutions
    sum=a+b+c+d+e; //All 5 numbers added together
    avg=sum/ttl;     //Sum divided by total amount of numbers
    //Display the output
    cout<<"Values    = "<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<"."<<endl;
    cout<<"Sum       = "<<sum<<endl;
    cout<<"Average   = "<<avg<<endl;
    //Exit the program
    
    return 0;
}

