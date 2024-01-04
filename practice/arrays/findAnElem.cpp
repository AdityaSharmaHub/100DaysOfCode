#include<iostream>
using namespace std;

int main(){
    int size=5, findElement=2;
    int numbers[size];

    // Taking inputs from the user
    for(int i=0; i<size; i++){
        cout<<"Enter the number: ";
        cin >> numbers[i];
    }

    // Find the specific element
    for(int i=0; i<size; i++){
        if(numbers[i] == findElement){
            cout<<"Number is present at index: "<<i;
            return 0;
        }
    }

    cout<<"Element not found";
    return 0;

}