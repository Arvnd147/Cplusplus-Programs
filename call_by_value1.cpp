#include<iostream>
#include<conio.h>
using namespace std;
void swap(int,int);
main()
{
    int a,b;
    cout<<"\nEnter the value for a:";
    cin>>a;
    cout<<"\nEnter the value for b:";
    cin>>b;
    cout<<"\n\tBEFORE SWAPPING";
    cout<<"\nMemory Address of a="<<&a;
    cout<<"\nMemory Address of b="<<&b;
    cout<<"\na="<<a<<"\tb"<<b;
    swap(a,b);
    cout<<"\n\tAFTER SWAPPING";
    cout<<"\nMemory Address of a="<<&a;
    cout<<"\nMemory Address of b="<<&b;
    cout<<"\na="<<a<<"\tb"<<b;
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n\tAT SWAPPING";
    cout<<"\nMemory Address of a="<<&a;
    cout<<"\nMemory Address of b="<<&b;
    cout<<"\na="<<a<<"\tb"<<b;
}