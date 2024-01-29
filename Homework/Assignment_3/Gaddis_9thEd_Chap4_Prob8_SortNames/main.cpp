/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 15, 2024, 7:34 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,name2,name3;
    //Initialize or input i.e. set variable values
    cin>>name1;
    cin>>name2;
    cin>>name3;
    //Map inputs -> outputs

    //Display the outputs
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    if(name1<name2 && name2<name3){
        cout<<name1<<"\n"<<name2<<"\n"<<name3;
        
    }else if(name1<name3 && name3<name2){
        cout<<name1<<"\n"<<name3<<"\n"<<name2;
        
    }else if(name2<name1 && name1<name3){
        cout<<name2<<"\n"<<name1<<"\n"<<name3;
        
    }else if(name2<name3 && name3<name1){
        cout<<name2<<"\n"<<name3<<"\n"<<name1;
        
    }else if(name3<name1 && name1<name2){
        cout<<name3<<"\n"<<name1<<"\n"<<name2;
        
    }else if(name3<name2 && name2<name1){
        cout<<name3<<"\n"<<name2<<"\n"<<name1;
    }
    
    //Exit stage right or left!
    return 0;
}