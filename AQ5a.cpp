//Diagonal Matrix

#include <iostream>
using namespace std;

void display_diagonal(int diagonal[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<diagonal[i]<<"   ";

            }
            else{
                cout<<0<<"   ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    int diagonal[]={1,2,3,4};

    display_diagonal(diagonal,n);

    return 0;
}