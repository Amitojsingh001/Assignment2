//Upper triangular Matrix


#include <iostream>
using namespace std;

void upper_tri(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                int index = (i*n-(i*(i-1))/2)+(j-i);
                cout<<arr[index]<<"   ";    //main
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
    //n(n+1)/2=4(5)/2=10 elements
    int arr[]={1,2,3,4,      //row1
                2,3,4,   //row2
                5,6,      //row3
                10};     //row4

    upper_tri(arr,n);

    return 0;
}