#include <iostream>
using namespace std;

int countDistinct(int arr[],int n) {
    int count = 0;
    for(int i=0;i<n;i++){
        bool is_duplicate=false;
        for(int j = 0; j < i; j++) {  
            if(arr[i] == arr[j]) {
                is_duplicate = true;
                break;
            }
        }
        if(is_duplicate==false) {
            count++;  
        }

        
    }
    cout << "Total distinct elements : "<<count<<endl;
    return 0;
}

int main() {
    int n;
    int arr[100];
    cout << "Enter the number of elements: "<<endl;cin>>n;

     
    cout<<"Enter the elements : "<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    countDistinct(arr, n);
    return 0;
}
