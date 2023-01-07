#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range:";
    cin>>n;
    int num=n; //4
    int a=0,b=2*n-2; //a=0,b=6
    int arr[2*n-1][2*n-1]; //arr[7][7]
    while(n!=1) //(4!=1),3,2,1
    {
        for(int i=a;i<=b;i++) //i=4 i<=6 i++
        {
            arr[a][i]=n; //[0][2]
            arr[b][i]=n; //[6][2]
            arr[i][a]=n; //[2][0]
            arr[i][b]=n; //[2][6]
        }
        a++;
        b--;
        n--;
    }
    arr[num-1][num-1]=1;
    for(int j=0;j<=2*num-2;j++)
    {
        for(int k=0;k<=2*num-2;k++)
        {
            cout<<arr[j][k];
        }
        cout<<endl;
    }
    return 0;
}