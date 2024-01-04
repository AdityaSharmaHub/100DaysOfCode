#include<iostream>
using namespace std;

int main(){
    int size=5, sum=0, avg=0;
    int numbers[size];

    // Taking inputs from the user
    for(int i=0; i<size; i++){
        cout<<"Enter the number: ";
        cin >> numbers[i];
    }

    // Average of all elements present in the array
    cout<<"Average of all elements are: ";
    for(int i=0; i<size; i++){
        sum += numbers[i];
        avg = sum / size;
    }

    cout<<avg;

}