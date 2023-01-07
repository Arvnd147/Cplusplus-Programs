#include<iostream>
using namespace std;
int main()
{
    cout<<"\n Enter Leap Year:";
    int year;
    cin>>year;
    if((year%4==0 & year%100!=0) | year%400==0)
    {
        cout<<"\nLeap Year";
    }
    else
    {
        cout<<"\nNot a Leap Year";
    }
}