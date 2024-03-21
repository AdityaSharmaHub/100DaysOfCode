#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Open file
    ofstream fout;
    fout.open("zoom.txt"); // if file is not present then it will create a new
    
    // Write file
    fout<<"Hello India";

    fout.close(); // to release the resources we need to close it

    // Open file
    ifstream fin;
    fin.open("zoom.txt");

    // Read file
    char c;
    // fin>>c; // this is not reading spaces
    c = fin.get(); // this will read spaces and tabs

    while(!fin.eof())
    {
        cout<<c;
        // fin>>c;
        c = fin.get();
    }

    fin.close();

    return 0;
}