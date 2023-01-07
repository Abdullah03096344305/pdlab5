#include<iostream>
using namespace std;

main()
{
    float vehicleprice,tax,final;
    string vehiclecode;
cout<<"enter the price of vehicle: ";
cin>>vehicleprice;
cout<<"enter vehicle type code: ";
cin>>vehiclecode;

if(vehiclecode=="m")
{

tax=(vehicleprice*6)/100;
final=tax+vehicleprice;
cout<<"your tax is: "<<tax<<endl;
cout<<"your final price of car is: "<<final<<endl;
}

if(vehiclecode=="e")
{

tax=(vehicleprice*8)/100;
final=tax+vehicleprice;
cout<<"your tax is: "<<tax<<endl;
cout<<"your final price of car is: "<<final<<endl;
}

if(vehiclecode=="s")
{

tax=(vehicleprice*10)/100;
final=tax+vehicleprice;
cout<<"your tax is: "<<tax<<endl;
cout<<"your final price of car is: "<<final<<endl;
}

if(vehiclecode=="v")
{

tax=(vehicleprice*12)/100;
final=tax+vehicleprice;
cout<<"your tax is: "<<tax<<endl;
cout<<"your final price of car is: "<<final<<endl;
}

if(vehiclecode=="t")
{

tax=(vehicleprice*15)/100;
final=tax+vehicleprice;
cout<<"your tax is: "<<tax<<endl;
cout<<"your final price of car is: "<<final<<endl;
}



}