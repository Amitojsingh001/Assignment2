//missing number in sorted array
#include <iostream>
using namespace std;

void find_missing(int arr[],int n){
    
    cout<<"Entered array :"<<endl;
    cout<<"[   ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<" ]";

    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]!=1){
            cout<<endl;
            cout<<"After index "<<i<<" , element missing is :"<<arr[i]+1<<endl;
        }
    }

    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    find_missing(arr,n);

    
    
    return 0;
}