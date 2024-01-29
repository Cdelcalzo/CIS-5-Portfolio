/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 11, 2024, 7:19 PM
 * Purpose: Restaurant Bill with tax + tip
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
    float meal,tax,tip,bill;
    //Initialize all variables
    meal=88.67;         //Meal cost before tax or tip
    tax=meal*0.0675;    //Meal tax
    tip=(meal+tax)*0.20;//Meal cost + tax with a 20% tip 
    //Process or map solutions
    bill=meal+tax+tip;  //Total Bill when you add the meal cost, tax, and tip
    //Display the output
    cout<<"Meal Cost = $"<<meal<<endl;
    cout<<"Tax       = $"<<tax<<endl;
    cout<<"Tip       = $"<<tip<<endl;
    cout<<"Total Bill After Tax and Tip = $"<<bill<<endl;
    //Exit the program
    
    return 0;
}

