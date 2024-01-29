/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 9:42 PM
 * Purpose: Lab Assignment Percentages | Military Budget
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
    milBdgt=7.0e11f; //Military Budget = 700 Billion   
    fedBdgt=4.1e12f; //Federal Budget  = 4.1 Trillion
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

