#include<iostream>
using namespace std;
int main(){
    int arr[4][4],i,j;
    cout<<"Enter the value of each element:";
    for (i=1;i<=3;i++){
        for (j=1;j<=3;j++){
            cout<<"\n"<<i<<j<<":";
            cin>>arr[i][j];
        }
    }
    cout<<"\nInput Matrix\n";
    for (i=1;i<=3;i++){
        for (j=1;j<=3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nOutput Matrix\n";
    for (i=1;i<=3;i++){
        for (j=3;j>=1;j--){
            cout<<arr[j][i]<<"\t";
        }
        cout<<"\n";
    }
}
//31 21 11
//32 22 12
//33 23 13