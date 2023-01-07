#include <iostream>
using namespace std;
int main()
{
    cout<< "\n Pointers ";
    int age{21}; //int age{21} --> new version
    cout<< "\n My age is :"<<age;
    cout<< "\n The address or location of my variable:"<<&age;
    int* location = &age; //pointer variable
    cout<<"\nThe location of the variable - age is"<<location;
    cout<<"\n The value stored in the variable age is "<<*location; 
    //de-referencing
    // dereferencing willfetch the value stored in the address which is stored in the stored in the pointer variable
    *location = 45;
    cout<<"\n"<<age;
    cout<<"\n"<<*location;
    age=81;
    cout<<"\n"<<*location;

    int hitrikage{86};
    cout<<"\n"<<hitrikage;
    location = &hitrikage; //the value in location is changed to the address of hitrikage
    cout<<"\n"<<*location;
}