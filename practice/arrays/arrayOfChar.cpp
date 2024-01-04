#include<iostream>
using namespace std;

int main(){
    char alphabets[100];

    for(char i='A'; i<='Z'; i++){
        cout<<"Enter the character: ";
        cin>>alphabets[i];
    }

    cout << "The array elements are: "; 
    for (char i='A'; i<='Z'; i++) { 
        cout << alphabets[i] << " "; 
    } 
}