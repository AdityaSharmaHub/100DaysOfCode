#include<iostream>
using namespace std;

int main(){
    int size=5;
    int numbers[100];

    for(int i=0; i<size; i++){
        cout<<"Enter the number: ";
        cin>>numbers[i];
    }


    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(numbers[i] < smallest){
            smallest = numbers[i];
        }
    }
    cout<<"Smallest number is: "<<smallest<<endl;


    int secondSmallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(numbers[i] != smallest){
            secondSmallest = min(secondSmallest, numbers[i]);
        }
    }

    cout<<"Second smallest number is: "<<secondSmallest<<endl;


    int thirdSmallest = INT_MAX;

    for(int i=0; i<size; i++){
        if((numbers[i] != smallest) && (numbers[i] != secondSmallest)){
            thirdSmallest = min(thirdSmallest, numbers[i]);
        }
    }

    cout<<"Third smallest number is: "<<thirdSmallest;
}