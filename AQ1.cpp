//Amitoj Singh (1024240089)
//binary search
#include <iostream>
using namespace std;

void binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while (start<=end){
        if(arr[mid]==key){
            cout<<"Element "<<key <<"found at index :"<<mid<<endl;
            return;
        }
        else if (arr[mid]<key){
            start=mid+1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        

        mid=start+(end-start)/2;
    }
}

int main(){
    int n;
    int arr[50];
    int key;
    cout<<"Enter the size of array : "<<endl;cin>>n;
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to find : "<<endl;cin>>key;

    binary_search(arr,n,key);

    
    
    return 0;
}