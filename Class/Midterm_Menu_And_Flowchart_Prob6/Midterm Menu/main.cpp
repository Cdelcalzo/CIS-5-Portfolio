/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 26th 2024
 * Purpose:  Menu for Midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare all Variables Here
    unsigned short x,y,z;
    int row;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    y=x;
    z=1;
    //Draw the shape
    switch (shape){
        case'x':
            for (row=1;row<=x;row++)
            {
                for (int clmn=1;clmn<=x;clmn++)
                {
                    if (row==clmn) {
                        cout<<y;
                        y-=1;
                        
                    }
                    else cout<<" ";
                }
            cout<<endl;
            }
        break;
        
        
        case'b':
        if (x%2==0){
        for (row=1;row<=x;row++)
            {
                for (int clmn=1;clmn<=x;clmn++)
                {
                    if (row==clmn) {
                        cout<<z;
                        z+=1;
                        
                    }
                    else cout<<" ";
                }
            cout<<endl;
            }
        }
        else{
        for (row=1;row<=x;row++)
            {
                for (int clmn=1;clmn<=x;clmn++)
                {
                    if (row==clmn) {
                        cout<<y;
                        y-=1;
                        
                    }
                    else cout<<" ";
                }
            cout<<endl;
            }
        }
        break;
        
        
        case'f':
        for (int row=x;row>=1;--row)
            {
            if (x%2==0){
            
                for (int clmn=1;clmn<=x;clmn++)
                {
                    if (row==clmn) {
                        cout<<y;
                        y-=1;
                        
                    }
                    else cout<<" ";
                }
            }
            else {
                for (int clmn=1;clmn<=x;clmn++)
                {
                    if (row==clmn) {
                        cout<<z;
                        z+=1;
                        
                    }
                    else cout<<" ";
                }
            }   
        cout<<endl;
        }
        break;
    }
}

void problem2(){
    //Declare all Variables Here
    char d1,d2,d3,d4;  //The order of digits in the input (d1 is the first digit (1000's place), d4 would be the last digit (1's place)
    unsigned short num;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>num;
    d4=num%10;
    d3=(num/10)%10;
    d2=(num/100)%10;
    d1=(num/1000);
    //Histogram Here
    cout<<static_cast<int>(d4)<<" ";
        for (int x=0;x<d4;x++)
        {
            cout<<"*";
        }
    cout<<endl;
    
    cout<<static_cast<int>(d3)<<" ";
        for (int x=0;x<d3;x++)
        {
            cout<<"*";
        }
    cout<<endl;
    
    cout<<static_cast<int>(d2)<<" ";
        for (int x=0;x<d2;x++)
        {
            cout<<"*";
        }
    cout<<endl;
    
    cout<<static_cast<int>(d1)<<" ";
    for (int x=0;x<d1;x++)
        {
            cout<<"*";
        }
    cout<<endl;
}

void problem3(){
    unsigned short num;
    char d1000,d100,d10,d1;
    string numW;  //Number as a word
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>num;
    
    d1000=(num/1000)%10;
    d100=(num/100)%10;
    d10=(num/10)%10;
    d1=num%10;
    //Calculate the 1000's, 100's, 10's and 1's
    d1000=(num/1000)%10;
    d100=(num/100)%10;
    d10=(num/10)%10;
    d1=num%10;
    
    //Output the check value
    if (d1000==1) numW+="One Thousand ";    //1000's place
    if (d1000==2) numW+="Two Thousand ";
    if (d1000==3) numW+="Three Thousand ";
    if (d1000==4) numW+="Four Thousand ";
    if (d1000==5) numW+="Five Thousand ";
    if (d1000==6) numW+="Six Thousand ";
    if (d1000==7) numW+="Seven Thousand ";
    if (d1000==8) numW+="Eight Thousand ";
    if (d1000==9) numW+="Nine Thousand ";
    
    if (d100==1) numW+="One Hundred ";      //100's place
    if (d100==2) numW+="Two Hundred ";
    if (d100==3) numW+="Three Hundred ";
    if (d100==4) numW+="Four Hundred ";
    if (d100==5) numW+="Five Hundred ";
    if (d100==6) numW+="Six Hundred ";
    if (d100==7) numW+="Seven Hundred ";
    if (d100==8) numW+="Eight Hundred ";
    if (d100==9) numW+="Nine Hundred ";
    
    if (d10==1){    //If 10's place is a 1, then it's a special case, and should have a different outcome, and should also get rid of the following 1's place text
        if (d1==1) numW+="Eleven "; //Numbers 11-19
        if (d1==2) numW+="Twelve ";
        if (d1==3) numW+="Thirteen ";
        if (d1==4) numW+="Fourteen ";
        if (d1==5) numW+="Fifteen ";
        if (d1==6) numW+="Sixteen ";
        if (d1==7) numW+="Seventeen ";
        if (d1==8) numW+="Eighteen ";
        if (d1==9) numW+="Nineteen ";
    }
    else {  //Assuming that the 10's place isn't 1, which means's their is no special case to worry about
        if (d10==2) numW+="Twenty ";    //10's place
        if (d10==3) numW+="Thirty ";
        if (d10==4) numW+="Fourty ";
        if (d10==5) numW+="Fifty ";
        if (d10==6) numW+="Sixty ";
        if (d10==7) numW+="Seventy ";
        if (d10==8) numW+="Eighty ";
        if (d10==9) numW+="Ninety ";
        
        if (d1==1) numW+="One ";    //1's place
        if (d1==2) numW+="Two ";
        if (d1==3) numW+="Three ";
        if (d1==4) numW+="Four ";
        if (d1==5) numW+="Five ";
        if (d1==6) numW+="Six ";
        if (d1==7) numW+="Seven ";
        if (d1==8) numW+="Eight ";
        if (d1==9) numW+="Nine ";
    }
    cout<<numW<<"and no/100's Dollars"<<endl;
}

void problem4(){
    //Declare all Variables Here
    char package;
    unsigned short hours;
    float aTotal,bTotal,cTotal; //Total for each case; saved=money you can save with a different case
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    //Case A
    aTotal=16.99;
    if (hours>10&&hours<=20){
        aTotal+=(hours-10)*0.95;
    }
    else if (hours>20){
        aTotal+=(hours-20)*0.85+9.50;
    }

    //Case B
    bTotal=26.99;
    if (hours>20&&hours<=30){
        bTotal+=(hours-20)*0.74;
    }
    else if (hours>30){
        bTotal+=(hours-30)*0.64+7.40;
    }
    
    cout<<setprecision(2)<<fixed<<"$";
    
    //Case C
    cTotal=36.99;
    
    //Output the Charge
    switch(package){
        case'a':{
            cout<<aTotal;
            if (aTotal<=bTotal&&aTotal<=cTotal){
            cout<<" A $"<<aTotal-aTotal;
            }
            else if (bTotal<=aTotal&&bTotal<=cTotal){
            cout<<" B $"<<aTotal-bTotal;
            }
            else if (cTotal<=aTotal&&cTotal<=bTotal){
            cout<<" C $"<<aTotal-cTotal;
            }
        }
        cout<<endl;
        break;
        
        case'A':{
            cout<<aTotal;
            if (aTotal<=bTotal&&aTotal<=cTotal){
            cout<<" A $"<<aTotal-aTotal;
            }
            else if (bTotal<=aTotal&&bTotal<=cTotal){
            cout<<" B $"<<aTotal-bTotal;
            }
            else if (cTotal<=aTotal&&cTotal<=bTotal){
            cout<<" C $"<<aTotal-cTotal;
            }
        }
        cout<<endl;
        break;
        
        case'b':{
            cout<<bTotal;
            if (aTotal<=bTotal&&aTotal<=cTotal){
            cout<<" A $"<<bTotal-aTotal;
            }
            else if (bTotal<=aTotal&&bTotal<=cTotal){
            cout<<" B $"<<bTotal-bTotal;
            }
            else if (cTotal<=aTotal&&cTotal<=bTotal){
            cout<<" C $"<<bTotal-cTotal;
            }
        }
        cout<<endl;
        break;
        
        case'B':{
            cout<<bTotal;
            if (aTotal<=bTotal&&aTotal<=cTotal){
            cout<<" A $"<<bTotal-aTotal;
            }
            else if (bTotal<=aTotal&&bTotal<=cTotal){
            cout<<" B $"<<bTotal-bTotal;
            }
            else if (cTotal<=aTotal&&cTotal<=bTotal){
            cout<<" C $"<<bTotal-cTotal;
            }
        }
        cout<<endl;
        break;
        
        case'c':{
            cout<<cTotal;
            if (aTotal<=bTotal&&aTotal<=cTotal){
            cout<<" A $"<<cTotal-aTotal;
            }
            else if (bTotal<=aTotal&&bTotal<=cTotal){
            cout<<" B $"<<cTotal-bTotal;
            }
            else if (cTotal<=aTotal&&cTotal<=bTotal){
            cout<<" C $"<<cTotal-cTotal;
            }
        }
        cout<<endl;
        break;
        
        case'C':{
            cout<<cTotal;
            if (aTotal<=bTotal&&aTotal<=cTotal){
            cout<<" A $"<<cTotal-aTotal;
            }
            else if (bTotal<=aTotal&&bTotal<=cTotal){
            cout<<" B $"<<cTotal-bTotal;
            }
            else if (cTotal<=aTotal&&cTotal<=bTotal){
            cout<<" C $"<<cTotal-cTotal;
            }
        break;
        }
    }
}

void problem5(){
    float payRate;
    unsigned short hrsWrkd;
    float ttl;
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if (hrsWrkd>=40){
        ttl=(payRate*20)+(payRate*1.5*20)+((hrsWrkd-40)*(payRate*2));
    }
    else if (hrsWrkd>=20&&hrsWrkd<40){
        ttl=(payRate*20)+((hrsWrkd-20)*(payRate*1.5));
    }
    else if (hrsWrkd<20){
        ttl=payRate*hrsWrkd;
    }
    //Output the check
    
    cout<<setprecision(2)<<fixed<<"$"<<ttl<<endl;
}

void problem6(){
    //Declare all Variables Here
    float x,fx,term,vTerm;
    int nTerms,oddTerm,evnTerm;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nTerms;
    fx=0;
    vTerm=1;
    evnTerm=1;
    oddTerm=1;
    //Calculate Sequence sum here
   /* for (int term=1;term<=nTerms;term++){
        vTerm*=x/oddTerm*(x/evnTerm);
        if (evnTerm=1) evnTerm=0;
        if(term%2==0) fx-=vTerm;
    */
     for (int term=1;term<=nTerms;term++){
        vTerm*=x/oddTerm*(x/evnTerm);
        if (evnTerm==1) evnTerm=0;
        oddTerm+=2;
        evnTerm+=2;
        if(term%2==0) fx-=vTerm;
        else fx+=vTerm;
    }
    
    //Output the result here
    cout<<setprecision(6)<<fixed<<fx<<endl;
}