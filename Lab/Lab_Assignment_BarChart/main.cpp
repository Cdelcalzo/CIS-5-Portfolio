/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 18, 2024, 8:51 PM
 * Purpose: Lab Assignment for the Barchart
 */

//System Libraries
#include <iostream> //Input-Output library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
const float ast=0.01;
//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    unsigned short s1,s2,s3,s4,s5;  //Store Sales (for inputs)
    unsigned short n1,n2,n3,n4,n5;  //Variables for the "for" statements
    //Initialize all variables

    //Process or map solutions
    
    //Section for the inputs
    
    cout<<"Enter Today's Sales for Store 1: $";
    cin>>s1;
    
    cout<<"Enter Today's Sales for Store 2: $";
    cin>>s2;
    
    cout<<"Enter Today's Sales for Store 3: $";
    cin>>s3;
    
    cout<<"Enter Today's Sales for Store 4: $";
    cin>>s4;
    
    cout<<"Enter Today's Sales for Store 5: $";
    cin>>s5;
    
    //Display the output
    cout<<endl<<"Sales Bar Chart (Each * Is Equal To $100)"<<endl;
    cout<<"Store 1:";          //Store 1
        for (n1=1;n1<s1;n1++)
        {
            cout<<"*";
            if (n1==s1/100)
                break;
        }
        cout<<endl;
    
    cout<<"Store 2:";          //Store 2
        for (n2=1;n2<s2;n2++)
        {
            cout<<"*";
            if (n2==s2/100)
                break;
        }
        cout<<endl;
    
    cout<<"Store 3:";          //Store 3
        for (n3=1;n3<s3;n3++)
        {
            cout<<"*";
            if (n3==s3/100)
                break;
        }
        cout<<endl;
    
    cout<<"Store 4:";          //Store 4
        for (n4=1;n4<s4;n4++)
        {
            cout<<"*";
            if (n4==s4/100)
                break;
        }
        cout<<endl;
    
    cout<<"Store 5:";          //Store 5
        for (n5=1;n5<s5;n5++)
        {
            cout<<"*";
            if (n5==s5/100)
                break;
        }
        cout<<endl;
  
    //Exit the program
    
    return 0;
}