/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 15, 2024, 6:05 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    unsigned short books;
    unsigned short points;
    
    //Initialize or input i.e. set variable values
    cin>>books;
    
    //Map inputs -> outputs
    if (books==0)     points=0;
    else if (books==1)points=5;
    else if (books==2)points=15;
    else if (books==3)points=30;
    else              points=60;  
       
    //Display the outputs
cout<<"Book Worm Points"<<endl;
cout<<"Input the number of books purchased this month."<<endl;
cout<<"Books purchased = "<<setw(2)<<books<<endl;
cout<<"Points earned   = "<<setw(2)<<points;
    //Exit stage right or left!
    return 0;
}