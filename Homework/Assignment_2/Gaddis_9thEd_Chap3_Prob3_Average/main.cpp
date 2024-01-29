/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 13, 2024
 * Purpose:  
 */
//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float testA,testB,testC,testD,testE,avg;
    //Initialize or input i.e. set variable values
    cin>>testA;
    cin>>testB;
    cin>>testC;
    cin>>testD;
    cin>>testE;
    //Map inputs -> outputs
    avg=(testA+testB+testC+testD+testE)/5;
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<setprecision(1)<<fixed<<avg;
    //Exit stage right or left!
    return 0;
}
