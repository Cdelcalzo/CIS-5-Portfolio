/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 8:06 PM
 * Purpose: Calculate Car distance in Miles on Highway and Town
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
    unsigned short gal;
    float mpgTwn,mpgHwy,distTwn,distHwy;
    
    //Initialize all variables
    gal=20;      //Gallons
    mpgTwn=23.5; //MPG in Town
    mpgHwy=28.9; //MPG on Highway
    
    //Process or map solutions
    distTwn=gal*mpgTwn; //Total distance in Town (miles)
    distHwy=gal*mpgHwy; //Total distance on Highway (miles)
    //Display the output
    cout<<"Maximum Gallons in Gas Tank = "<<gal<<endl<<endl;
    cout<<"Miles Per Gallon in Town    = "<<mpgTwn<<endl;
    cout<<"Total Distance in Town      = "<<distTwn<<" Miles"<<endl<<endl;
    cout<<"Miles Per Gallon on Highway = "<<mpgHwy<<endl;
    cout<<"Total Distance on Highway   = "<<distHwy<<" Miles"<<endl;
    //Exit the program
    
    return 0;
}

