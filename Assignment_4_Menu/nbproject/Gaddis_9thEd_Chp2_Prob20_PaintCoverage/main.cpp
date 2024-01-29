/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 5:32 PM
 * Purpose: Total number of cans needed to Cover a Fence in two coats of paint
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
    unsigned short fncHt,fncLnth,pntCov,nCans,lyrs;
    //Initialize all variables
    fncHt=6;     //Feet
    fncLnth=100; //Feet
    pntCov=340;  //Square feet
    lyrs=2*2;   //total paint layers (2 sides * 2 layers per side)
    //Process or map solutions
    nCans=lyrs*fncHt*fncLnth/pntCov+1; //+1 for ceiling; must round up to nearest whole can
    //Display the output
    cout<<"Fence Height   = "<<fncHt<<" Feet"<<endl;
    cout<<"Fence Length   = "<<fncLnth<<" Feet"<<endl;
    cout<<"Paint Coverage = "<<pntCov<<" Square Feet Per Gallon"<<endl;
    cout<<"Number of Paint Cans Needed = "<<nCans<<" Cans"<<endl;
    //Exit the program
    
    return 0;
}

