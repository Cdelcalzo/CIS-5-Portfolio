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
    float retPay;    //Retroactive Pay
    float newMnth;   //New Monthly Salary
    float newSal;    //New Annual Salary
    unsigned short prevSal;
    //Initialize or input i.e. set variable values
    cin>>prevSal;  //Previous salary is input
    
    //Map inputs -> outputs
    retPay=(prevSal*0.076)/2;
    newSal=2*retPay+prevSal;
    newMnth=newSal/12;
    //Display the outputs
    cout<<setprecision(2)<<fixed<<"Input previous annual salary."<<endl;
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newSal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMnth;
    //Exit stage right or left!
    return 0;
}