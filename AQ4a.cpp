#include <iostream>
using namespace std;

void string_concatenate(char s1[],char s2[]){
    cout<<"Entered Strings : '"<<s1<<"' & '"<<s2<<"'"<<endl;

     int i = 0, j = 0;
    while (s1[i] != '\0') {
        i++; //finding length
    }
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0'; //fixing garbage
    cout<<endl<<"After Concatenation : '"<<s1<<"'";
}

int main(){
    char s1[100],s2[100];
    cout<<"Enter first String : ";
    cin.getline(s1,100);
    cout<<"Enter Second String: ";
    cin.getline(s2,100);
    
    string_concatenate(s1,s2);
    return 0;
}