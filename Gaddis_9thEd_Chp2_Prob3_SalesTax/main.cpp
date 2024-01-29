/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 6:22 PM
 * Purpose: Template for assignment 1
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
    short prchse;
    float stateTx,cntyTx,ttlTx,aftTx;
    //Initialize all variables
    prchse=95;           //Purchase Amount
    stateTx=prchse*0.04; //State Tax
    cntyTx=prchse*0.02;  //County Tax
    //Process or map solutions
    ttlTx=stateTx+cntyTx;//Total Tax (State Tax + County Tax)
    aftTx=prchse+ttlTx;  //Total Purchase Price After Taxes
    //Display the output
    cout<<"Purchase Price = $"<<prchse<<endl;
    cout<<"State Tax      = $"<<stateTx<<endl;
    cout<<"County Tax     = $"<<cntyTx<<endl;
    cout<<"Total Tax      = $"<<ttlTx<<endl;
    cout<<"Total Purchase Price After Tax = $"<<aftTx<<endl;
            
    //Exit the program
    
    return 0;
}

