#include<iostream>
using namespace std;
int main()
{
    double r;
    cout<<"\nEnter the radius of the ball(in cm):";
    cin>>r;
    cout<<"No. of balls that can be packed is: "<<int(10000/((1.333)*(3.14*r*r*r)));
}