/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 7:39 PM
 * Purpose: Calculate miles per gallon
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
    unsigned short gallons,miles;
    float mpg;
    //Initialize all variables
    gallons=15;
    miles=375;
    //Process or map solutions
    mpg=miles/gallons;
    //Display the output
    cout<<"Gallons = "<<gallons<<endl;
    cout<<"Miles   = "<<miles<<endl;
    cout<<"Miles Per Gallon = "<<mpg<<endl;
    //Exit the program
    
    return 0;
}

