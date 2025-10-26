//Lower triangular Matrix   n(n+1)/2


#include <iostream>
using namespace std;

void lower_tri(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                int index = (i * (i + 1)) / 2 + j;
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
    int arr[]={1,      //row1
                2,3,    //row2
                4,5,6,      //row3
                7,8,9,10};     //row4

    lower_tri(arr,n);

    return 0;
}