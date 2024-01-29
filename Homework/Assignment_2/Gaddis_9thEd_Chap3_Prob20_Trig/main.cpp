/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 13, 2024
 * Purpose:  
 */
//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>   //trig functions
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float degrees,  //angle in degrees
           radians; //angle in radians
    //Initialize or input i.e. set variable values
    cin>>degrees;
    //Map inputs -> outputs
    radians=degrees*PI/180;
    //Display the outputs
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<setprecision(0)<<fixed<<"sin("<<degrees<<") = "<<setprecision(4)<<fixed<<sin(radians)<<endl;
    cout<<setprecision(0)<<fixed<<"cos("<<degrees<<") = "<<setprecision(4)<<fixed<<cos(radians)<<endl;
    cout<<setprecision(0)<<fixed<<"tan("<<degrees<<") = "<<setprecision(4)<<fixed<<tan(radians);
    //Exit stage right or left!
    return 0;
}