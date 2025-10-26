#include <iostream>
using namespace std;

int count_inversions(int arr[],int n){
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(arr[i]>arr[j] && i<j){
                count++;
            }
            
        }
    }
    cout << "Number of inversions : " <<count<< endl;
    return count;
}

int main(){
    int arr[] = {2, 4, 1, 3, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);

    count_inversions(arr, n);
    return 0;
}
