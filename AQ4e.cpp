//Write a program to convert a character from uppercase to lowercase.


#include <iostream>
using namespace std;

void upper_to_lower(char s1[]){
    cout<<"Entered String in uppercase : '"<<s1<<"'"<<endl;

    int n = 0;
    while (s1[n] != '\0') {
        n++; //finding length
    }
    
    for(int i=0;i<n;i++){
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = s1[i] + 32;
        }
    }

     
    cout<<endl<<"In Lowercase : '"<<s1<<"'"<<endl;
}

int main(){
    char s1[100];
    cout<<endl<<"Enter String  : ";
    cin.getline(s1,100);
    
    
    upper_to_lower(s1);
    return 0;
}