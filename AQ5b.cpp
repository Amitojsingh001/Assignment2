// Tri-diagonal Matrix. 3n-2

#include <iostream>
using namespace std;

void tridiagonal(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[n-1+i]<<"   ";    //main

            }
            else if(i==j+1){
                cout<<arr[i-1]<<"   ";    //lower
            }
            else if(i==j-1){
                cout<<arr[2*n-1]<<"   ";    //upper
            }
            else {
                cout<<0<<"   "; //0
            }
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    int arr[]={1,2,3,      //lower 3
                4,5,6,7,    //main 4
                3,4,5};     //upper 3

    tridiagonal(arr,n);

    return 0;
}