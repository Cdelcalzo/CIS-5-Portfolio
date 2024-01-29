/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 15, 2024, 9:31 PM
 * Purpose:  Internet Package billing
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
    char pckg;
    float bill,hours;
    //Initialize or input i.e. set variable values
    cin>>pckg;
    cin>>hours;
    
    //Map inputs -> outputs
    if (pckg=='A'&&hours<744)bill=9.95+(hours-10)*2;
    else if (pckg=='B'&&hours<744)bill=14.95+(hours-20);
    else if (pckg=='C'&&hours<744)bill=19.95;
    else    cout<<"Error.";
    //Display the outputs
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cout<<"Bill = $"<<setw(6)<<bill;
    //Exit stage right or left!
    return 0;
}