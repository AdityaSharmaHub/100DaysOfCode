#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // defining array size 
    int size = 20, sum = 0; 
    // defining array of size "size" 
    int numbers[size]; 
  
    // using loop to move to every array element and then 
    // using either cin to insert the value given by the 
    // user to the array element 
    for (int i = 0; i < size; i++) { 
        cout << "Enter a number: "; 
        cin >> numbers[i]; 
    } 
  
    // Print the array elements 
    cout << "The array elements are: "; 
    for (int i = 0; i < size; i++) { 
        cout << numbers[i] << " "; 
    } 

    cout<<endl;

    // Sum of the elements in the array
    cout<<"Sum of all the elements are: ";
    for(int i = 0; i < size; i++){
        sum = sum + numbers[i];
    }
    
    cout<<sum;
  
    return 0; 
}