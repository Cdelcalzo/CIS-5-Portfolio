/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 13, 2024
 * Purpose:  
 */
//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short ppl;  //People
    short max;  //Max number of people
    short diff;
    
    //Initialize or input i.e. set variable values
    cin>>ppl;
    cin>>max;
    //Map inputs -> outputs
    diff=abs(ppl-max);
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    if (ppl>=max)
       cout<<"Meeting can be held."<<"\n"<<"Increase number of people by "<<diff<<" will be allowed without violation.";
    else
       cout<<"Meeting cannot be held."<<"\n"<<"Reduce number of people by "<<diff<<" to avoid fire violation.";
    //Exit stage right or left!
    return 0;
}