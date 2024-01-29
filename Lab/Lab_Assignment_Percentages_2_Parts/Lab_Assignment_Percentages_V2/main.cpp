/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 10:25 PM
 * Purpose: Lab Assignment Percentages of Military Budget V2
 */

//System Libraries
#include <iostream> //Input-Output library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const unsigned int pct=100; //Percent conversion
//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float milBdgt,fedBdgt,mlPct;
    //Initialize all variables
    milBdgt=8.007e11f; //Military Budget = 800.7 Billion   
    fedBdgt=6.818e12f; //Federal Budget  = 6.818 Trillion
    //Process or map solutions
    //Military budget's % of Federal budget as a Fraction
    mlPct=milBdgt/fedBdgt*pct;   //Military budget's % of Federal budget as a percentage
    //Display the output
    cout<<"Military budget = $"<<milBdgt<<endl;
    cout<<"Federal budget  = $"<<fedBdgt<<endl;
    cout<<"Military percentage = "<<mlPct<<"%"<<endl;
    //Exit the program
    
    return 0;
}

