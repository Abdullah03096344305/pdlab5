#include<iostream>
using namespace std;

main()
{
int day,days,hours,workers,a,b,c,d;

cout<<"enter the number of hours you have: ";
cin>>hours;
cout<<"enter days: ";
cin>>day;
b=hours/10;
cout<<"enter the no of workers: ";
cin>>workers;
c=day*b*workers;
d=c-hours;
if(d>hours)
{
cout<<"Yes! "<<d<<" hours left."<<endl;

}
if(d<hours)
{
cout<<"Not Enough Time! "<<d<<"hours needed"<<endl;

}


}