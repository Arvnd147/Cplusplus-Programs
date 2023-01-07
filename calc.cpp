#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    do
    {
        cout<<"\nEnter the value for a :";
        cin>>a;
        cout<<"\nEnter the value for b :";
        cin>>b;
        cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.ModularDivision";
        cout<<"\nEnter your choice [1-5]:";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nThe Sum is :"<<a+b;
                break;
            case 2:
                cout<<"\nThe Difference is :"<<a-b;
                break;
            case 3:
                cout<<"\nThe Product is :"<<a*b;
                break;
            case 4:
                cout<<"\nThe Quotient is :"<<a/b;
                break;
            case 5:
                cout<<"\nThe Remainder is :"<<a%b;
                break;
            default:
                cout<<"\nInvalid Choice";
                break;                  
        }
        cout<<"\nPress 1 to perform another operation";
        cin>>c;
    }while (c==1);
}
