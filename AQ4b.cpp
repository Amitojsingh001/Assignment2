#include <iostream>
using namespace std;

void reverse_string(char s1[]){
    cout<<"Entered String : '"<<s1<<" '"<<endl;

    int n = 0;
    while (s1[n] != '\0') {
        n++; //finding length
    }
    for(int i=0;i<n/2;i++){
        char temp=s1[i];
        s1[i]=s1[n-i-1];
        s1[n-i-1]=temp;
    }

     
    cout<<endl<<"After Reversing : '"<<s1<<"'";
}

int main(){
    char s1[100];
    cout<<"Enter String : ";
    cin.getline(s1,100);
    
    reverse_string(s1);
    return 0;
}