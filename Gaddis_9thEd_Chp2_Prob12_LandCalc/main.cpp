/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 6:56 PM
 * Purpose: Calculate the total acres in the land area given
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
    float acre,land,ttlAcre;
    //Initialize all variables
    acre=43560;
    land=391876;
    //Process or map solutions
    ttlAcre=land/acre;
    //Display the output
    cout<<"Acre      =  "<<acre<<" Square Feet"<<endl;
    cout<<"Land Area = "<<land<<" Square Feet"<<endl;
    cout<<"Total Acres of land = "<<ttlAcre<<endl;
    //Exit the program
    
    return 0;
}

