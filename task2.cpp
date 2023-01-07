#include<iostream>
using namespace std;

main()
{
double length,width,height;
double a;
string unit ;
cout<<"Enter Length: ";
cin>>length;
cout<<"Enter width: ";
cin>>width;
cout<<"Enter height: ";
cin>>height;
cout<<"enter Unit: ";
cin>>unit;
if(unit=="millimeter")
{
a=(length*width*height)/(3)*1000 ;
cout<<a <<" cubic millimeters";
}
if(unit=="kilometer")
{
a=((length*width*height)/(3))/(1000) ;
cout<<a <<" cubic kilometer"<<endl;
}
if (unit=="centimeter")
{
 a=((length*width*height)/(3))*(100) ;
cout<<a <<" cubic centimeter"<<endl;   
}


    
}