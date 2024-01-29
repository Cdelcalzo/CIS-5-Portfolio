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
    float C,F;
    //Initialize or input i.e. set variable values
    cin>>F;
    C=(F-32)*5/9;
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<setprecision(1)<<fixed<<F<<" Degrees Fahrenheit = "<<C<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}