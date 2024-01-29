/* 
 * File:   main.cpp
 * Author: Cole Del Calzo
 * Created on January 21st, 2024, 5:50 PM
 * Purpose:  Menu for assignment 4
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only
const float liter=0.264179;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option,//Option to choose from menu
                  nOpshun;//Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpshun='9';//In this case we have 3 options
    do{
        //Display user choice
        cout<<"Choose from the options displayed"<<endl;
        cout<<"1 -> Problem: Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
        cout<<"2 -> Problem: Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"3 -> Problem: Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"4 -> Problem: Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"5 -> Problem: Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
        cout<<"6 -> Problem: Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
        cout<<"7 -> Problem: Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
        cout<<"8 -> Problem: Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
        cout<<"9 -> Problem: Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl<<endl;
        
        cin>>option;//Read in the option
        //Use a switch case to implement
        switch(option){
            case '1':
                {cout<<endl<<"Gaddis_9thEd_Chap5_Prob1_Sum"<<endl<<"Input number for sequence"<<endl<<endl;
                
                //Declare Variables
                unsigned short sum;   //sum of all the days
                unsigned short num;   //Number that is input
                short count;
                //Initialize or input i.e. set variable values
                cin>>num;
                sum=0;
                count=1;
                //Map inputs -> outputs
                for (int count=1;count<=num;count++)
                {
                    sum+=count;
                }
                //Display the outputs
                cout<<"Sum = "<<sum;
                cout<<endl<<endl;
                break;
            }
            
            case '2':{
                cout<<endl<<"Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl<<"Enter total days of pay"<<endl<<endl;
                
                 //Declare Variables
                unsigned short day;
                unsigned int pay,sum;
                unsigned int dlr,pny;  //Dollar and penny
                unsigned int count;
                //Initialize or input i.e. set variable values
                pay=1;
                sum=0;
                cin>>day;
                //Map inputs -> outputs
                for (count=1;count<=day;count++)
                {
                     pay*=2;
                     sum+=pay;

                }
                dlr=(sum/2)/100;
                pny=(sum/2)%100;
                cout<<"Pay = "<<setprecision(2)<<"$"<<dlr<<"."
                    <<((pny<10)?"0":"")
                    <<pny;
                
                
                cout<<endl<<endl;
                break;
            }
                
            case '3':{
                cout<<endl<<"Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl<<"Enter a number, then a single character"<<endl<<endl;
                
                //Declare Variables
                unsigned short y;
                char x;
                cin>>y;
                cin>>x;

                for (int row=1;row<y;row++)
                {
                    for (int clmn=0;clmn<y;clmn++)
                    {
                        cout<<x;
                        if (clmn==15)
                            break;
                    }
                    cout<<endl;
                    if (row==15)
                        break;
                }
                if (y>0)
                {
                    for (int clmn=0;clmn<y;clmn++)
                    {
                        cout<<x;
                    }
                }
                
                cout<<endl<<endl;
                break;
            }
            case '4':{
                cout<<endl<<"Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl<<endl;
               
                //Declare Variables
                unsigned int row;
                //Initialize or input i.e. set variable values
                cin>>row;
                //Map inputs -> outputs

                    for (int x=1;x<=row;x++)
                    {

                        for(int y=1;y<=x;y++)
                        {
                            cout<<"+";
                        }
                        cout<<endl<<endl;
                    }
                    for (int x=row;x>1;--x)
                    {
                        for(int y=1;y<=x;++y)
                        {
                            cout<<"+";
                        }
                        cout<<endl<<endl;
                    }
                    if (row>0){
                    cout<<"+";
                    }

                cout<<endl<<endl;
                break;
            }
            case '5':{
                cout<<endl<<"Savitch_9thEd_Chap4_Prob1_MPG"<<endl<<endl;
               
                //Declare Variables       
                float miles,gal;
                float mpg;
                char again;
                //Initialize or input i.e. set variable values
                while (again!='n'){

                    cout<<"Enter number of liters of gasoline:"<<endl<<endl;
                    cin>>gal;
                    cout<<"Enter number of miles traveled:"<<endl<<endl;
                    cin>>miles;
                    cout<<"miles per gallon:"<<endl;
                    mpg=miles/gal/liter;
                    cout<<setprecision(2)<<fixed<<mpg<<endl;
                    cout<<"Again: (y or n)"<<endl;
                    cin>>again;
                    if (again!='n')
                    {
                        cout<<endl;
                    }
                }

                cout<<endl<<endl;
                break;
            }
            case '6':{
                cout<<endl<<"Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl<<endl;
               
                //Declare all Variables
                float miles,gal,miles1,gal1;
                float mpg,mpg1;
                char again;
                //Output the solution
                while (again!='n'){

                    cout<<"Car 1"<<endl;                                    //Car 1
                    cout<<"Enter number of liters of gasoline:"<<endl;
                    cin>>gal;
                    cout<<"Enter number of miles traveled:"<<endl;
                    cin>>miles;
                    cout<<"miles per gallon: ";
                    mpg=miles/gal/liter;
                    cout<<setprecision(2)<<fixed<<mpg<<endl<<endl;

                    cout<<"Car 2"<<endl;                                    //Car 2
                    cout<<"Enter number of liters of gasoline:"<<endl;
                    cin>>gal1;
                    cout<<"Enter number of miles traveled:"<<endl;
                    cin>>miles1;
                    cout<<"miles per gallon: ";
                    mpg1=miles1/gal1/liter;
                    cout<<setprecision(2)<<fixed<<mpg1<<endl<<endl;

                    if (mpg>mpg1)
                    {
                        cout<<"Car 1 is more fuel efficient"<<endl<<endl;
                    }
                    else
                    {
                        cout<<"Car 2 is more fuel efficient"<<endl<<endl;
                    }

                    cout<<"Again:"<<endl;
                    cin>>again;
                    if (again!='n')
                    {
                        cout<<endl;
                    }
                }
                
                cout<<endl<<endl;
                break;
            }
            case '7':{
                cout<<endl<<"Savitch_9Ed_Chap4_Prob4_Inflation"<<endl<<endl;
               
                //Declare Variables
                float price,yearAgo,inf;
                char again;
                //Initialize or input i.e. set variable values
               while (again!='n'){
                    cout<<"Enter current price:"<<endl;
                    cin>>price;
                    cout<<"Enter year-ago price:"<<endl;
                    cin>>yearAgo;
                    inf=((price-yearAgo)/yearAgo)*100;
                    cout<<"Inflation rate: "<<setprecision(2)<<fixed<<inf<<"%"<<endl<<endl;
                    cout<<"Again:(y or n)"<<endl;
                    cin>>again;
                    if (again!='n'){
                    cout<<endl;
                    }
                }
                
                cout<<endl<<endl;
                break;
            }
            case '8':{
                cout<<endl<<"Savitch_9Ed_Chap4_Prob5_EstCost"<<endl<<endl;
               
                
                //Declare Variables
                float price,yearAgo,inf;
                float p1,p2;
                char again;
                //Initialize or input i.e. set variable values
                while (again!='n'){
                    cout<<"Enter current price:"<<endl;
                    cin>>price;
                    cout<<"Enter year-ago price:"<<endl;
                    cin>>yearAgo;
                    inf=((price-yearAgo)/yearAgo)*100;
                    cout<<"Inflation rate: "<<setprecision(2)<<fixed<<inf<<"%"<<endl<<endl;
                    p1=(inf/100+1)*price;
                    p2=(inf/100+1)*p1;
                    cout<<"Price in one year: $"<<p1<<endl;
                    cout<<"Price in two year: $"<<p2<<endl<<endl;
                    cout<<"Again:(y or n)"<<endl;
                    cin>>again;
                    if (again!='n'){
                    cout<<endl;
                    }
                 }
    
                cout<<endl<<endl;
                break;
            }
            case '9':{
                cout<<endl<<"Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl<<endl;
               
                //Declare Variables
                float v1,v2,v3,b1,b2;
                //Initialize or input i.e. set variable values
                cout<<"Enter first number:"<<endl<<endl;
                cin>>v1;
                cout<<"Enter Second number:"<<endl<<endl;
                cin>>v2;
                cout<<"Enter third number:"<<endl<<endl;
                cin>>v3;
                //Map inputs -> outputs
                if (v1>v2){
                    b1=v1;
                }
                else{
                    b1=v2;
                }

                if (b1>v3){
                    b2=b1;
                }
                else{
                    b2=v3;
                }
                //Display the outputs
                cout<<"Largest number from two parameter function:"<<endl<<b1<<endl<<endl;
                cout<<"Largest number from three parameter function:"<<endl<<b2<<endl;
                
                cout<<endl<<endl;
                break;
            }
             default:cout<<endl<<"Exited Program | Thank You!"<<endl<<endl;
        }
        
    }while(option<=nOpshun&&option>=1);
    
    //Exit the Program
    return 0;
}