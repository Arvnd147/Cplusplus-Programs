#include<iostream>
using namespace std;
void ChangeTheValue(int *age)
{
    *age = 91;
}
int main()
{
    int myAge = 21;
    cout<<"Before calling the function my age is "<<myAge;
    ChangeTheValue(&myAge);
    cout<<"\nAfter calling the function ChangeTheValue "<<myAge;
}