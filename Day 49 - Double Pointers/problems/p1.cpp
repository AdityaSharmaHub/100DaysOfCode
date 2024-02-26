#include<iostream>
using namespace std;

int main()
{
    char c[] = "GATE2024";
    char *p = c;
    cout<<p + p[3] - p[1];

    // Logic
    // p = 100 (address of first index)
    // p[3] = 'E'
    // p[1] = 'A'
    // p + p[3] - p[1]
    // 100 + 'E' - 'A'
    // 100 + 69 - 65    (ASCII Value)
    // 100 + 4 x 1 (because of char datatype)
    // 104
    // It will print from add 104 i.e 2024 will be printed till it sees '\'

    // Visualization of array
    // G   A   T   E   2   0   2   4   '\'
    // 100 101 102 103 104 105 106 107 null (address)
    return 0;
}