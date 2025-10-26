//missing number in sorted array
#include <iostream>
using namespace std;

void find_missing(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    cout<<"Entered array :"<<endl;
    cout<<"[   ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<" ]";

    while(start<=end){
        if(arr[mid]==(mid+1)){
            start=mid+1;
        }
        else {
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    cout<<endl;
    cout<<"At index "<<start<<" , array is missing :"<<start+1<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    find_missing(arr,n);

    
    
    return 0;
}