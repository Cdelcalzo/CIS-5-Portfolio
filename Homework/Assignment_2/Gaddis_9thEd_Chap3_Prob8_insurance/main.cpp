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
    float insr,insrRec,cost;
    //Initialize or input i.e. set variable values
    cin>>cost;
    insr=0.80;
    
    //Map inputs -> outputs
    insrRec=insr*cost;
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<insrRec<<" of insurance.";
    //Exit stage right or left!
    return 0;
}