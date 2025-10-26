// Write a program to delete all the vowels from the string. 

#include <iostream>
using namespace std;

void remove_vowel(char s1[]){
    cout<<"Entered String : '"<<s1<<"'"<<endl;

    int n = 0;
    while (s1[n] != '\0') {
        n++; //finding length
    }
    char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            if(s1[i]==vowel[j]){
                for(int k=i;k<n;k++){
                    s1[k]=s1[k+1];
                }
                n--;
                i--;
            }
        }
    }

     
    cout<<endl<<"After Removing vowels: '"<<s1<<"'";
}

int main(){
    char s1[100];
    cout<<"Enter String : ";
    cin.getline(s1,100);
    
    
    remove_vowel(s1);
    return 0;
}