//Symmetric Matrix


#include <iostream>
using namespace std;

void symmetric(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                int index = (i * (i + 1)) / 2 + j;
                cout<<arr[index]<<"   ";    //main
            }
           
            else {
                int index = j*(j+1)/2 + i;
                cout << arr[index] << "   ";
                
            }
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    //n(n+1)/2=4(5)/2=10 elements. Storing as lower triangular matrix
    int arr[]={1,      //row1
                3,4,   //row2
                5,6,7,      //row3
                10,1,3,4};     //row4

    symmetric(arr,n);

    return 0;
}