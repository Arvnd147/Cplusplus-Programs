#include<iostream>
#include<conio.h>
using namespace std;
void swap(int,int); //we have to declare our function here with the data types we use in the parameter
int main()
{
    cout<<"Enter the value for a:";
    int a;
    cin>>a;
    cout<<"Enter the value for b:";
    int b;
    cin>>b;
    cout<<"\nMemory Address of a = "<<&a;
    cout<<"\nMemory Address of b = "<<&b;
    cout<<"\n\tBEFORE SWAPPING-MAIN FUNCTION";
    cout<<"\na="<<a<<"\tb"<<b;
    swap(a,b);
    cout<<"\n\tAFTER SWAPPING-MAIN FUNCTION";
    cout<<"\nMemory Address of a = "<<&a;
    cout<<"\nMemory Address of b = "<<&b;
    cout<<"\na="<<a<<"\tb"<<b;
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"\n\tAT SWAPPING-SUB FUNCTION";
    cout<<"\nMemory Address of a = "<<&x;
    cout<<"\nMemory Address of b = "<<&y;
    cout<<"\na="<<x<<"\tb"<<y;
}

/* swapping without temp
#x=1 y=2
x=x+y;  #x=3 y=2
y=x-y;  #x=3 y=1
x=x-y;  #x=2 y=1

in the above program we declare the variables locally
to see the program of global declaration see the program sent by Sir on 22.1o.21
*/