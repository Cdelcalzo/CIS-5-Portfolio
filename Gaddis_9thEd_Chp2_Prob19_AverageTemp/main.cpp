/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 7:46 PM
 * Purpose: Average Temperatures with a 2 degree increase
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
    short den,nyc,phx,inc;            //Avg Temps in Denver, New York, and Phoenix | Temp Increase
    unsigned short denA,nycA,phxA;//Avg Temps in same cities after 2 degree increase
    //Initialize all variables
    den=88;
    nyc=85;
    phx=106;
    inc=2;   //Total increase in average temperatures
    //Process or map solutions
    denA=den+inc;
    nycA=nyc+inc;
    phxA=phx+inc;
    //Display the output
    cout<<"Previous Average July High Temperatures (Fahrenheit):"<<endl;
    cout<<"Denver        = "<<den<<endl;
    cout<<"New York City = "<<nyc<<endl;
    cout<<"Phoenix       = "<<phx<<endl;
    cout<<endl;
    cout<<"New Average July High Temperatures (Fahrenheit):"<<endl;
    cout<<"Denver        = "<<denA<<endl;
    cout<<"New York City = "<<nycA<<endl;
    cout<<"Phoenix       = "<<phxA<<endl;
    //Exit the program
    
    return 0;
}

