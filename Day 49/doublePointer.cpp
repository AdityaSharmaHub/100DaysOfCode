#include<iostream>
using namespace std;

// Using function

void fun(int *p)
{
    *p = *p + 10;
}

int main()
{
    int n = 10;
    int *p = &n; // Single pointer
    int **p2 = &p; // Double pointer

    cout<<p<<endl;
    fun(p);
    cout<<n<<endl;

    return 0;
}





// int main()
// {
//     int n = 10;
//     int *p = &n; // Single pointer
//     int **p2 = &p; // Double pointer
//     int ***p3 = &p2; // Triple pointer

//     cout<<p<<endl; // This will print the add of n
//     cout<<&p<<endl; // This will print the add of p
//     cout<<p2<<endl; // This will print the add of p
//     cout<<&p2<<endl; // This will print the add of p2
//     cout<<p3<<endl; // This will print the add of p2


//     // Similarly you can create multiple pointers
//     // Like - 
//     // int ****p4 = &p3; // Quadruple (4) pointer
    
    
//     // Let's modify the value of n using multiple pointers

//     // Original value
//     cout<<n<<endl;

//     // Using single pointer
//     *p = *p + 5;
//     cout<<n<<endl;

//     // Using double pointer
//     **p2 = **p2 + 5;
//     cout<<n<<endl;

//     // Using triple pointer
//     ***p3 = ***p3 + 5;
//     cout<<n<<endl;


//     return 0;
// }