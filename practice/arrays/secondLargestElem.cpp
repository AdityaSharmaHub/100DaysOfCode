#include<iostream>
using namespace std;

int main(){
    int size=5;
    int numbers[100];

    for(int i=0; i<size; i++){
        cout<<"Enter the number: ";
        cin>>numbers[i];
    }

    int largest=-1;

    for(int i=0; i<size; i++){
        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }
    cout<<"Largest number is: "<<largest<<endl;

    int secondLargest = -1;

    for(int i=0; i<size; i++){
        if(numbers[i] != largest){
            secondLargest = max(secondLargest, numbers[i]);
        }
    }

    cout<<"Second Largest number is: "<<secondLargest;
}