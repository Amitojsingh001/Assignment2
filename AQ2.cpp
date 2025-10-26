//bubble sort
#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    
    cout<<"Entered array :"<<endl;
    cout<<"[   ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<" ]";


    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                arr[j]=arr[j+1]+arr[j];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    cout<<endl<<endl;
    cout<<"Sorted array :"<<endl;
    cout<<"[   ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<" ]";
}

int main(){
    cout<<"BUBBLE SORT"<<endl;
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);

    
    
    return 0;
}