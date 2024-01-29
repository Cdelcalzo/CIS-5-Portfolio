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
    float cookies,serving,cal,calE;
    //Initialize or input i.e. set variable values
    cin>>cookies;
    serving=cookies/4;
    cal=300;
    
    //Map inputs -> outputs
    calE=serving*cal;    //Calories eaten
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<calE<<" calories.";
    //Exit stage right or left!
    return 0;
}