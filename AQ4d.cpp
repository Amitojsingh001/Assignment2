//Write a program to sort the strings in alphabetical order. 

#include <iostream>
using namespace std;

void sort_alphabetically(char s1[]){
    cout<<"Entered String : '"<<s1<<"'"<<endl;

    int n = 0;
    while (s1[n] != '\0') {
        n++; //finding length
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (s1[i]>s1[j]){
                char temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;               
            }
        }
    }

     
    cout<<endl<<"After sorting: '"<<s1<<"'"<<endl;
}

int main(){
    char s1[100];
    cout<<endl<<"Enter String in single case : ";
    cin.getline(s1,100);
    
    
    sort_alphabetically(s1);
    return 0;
}