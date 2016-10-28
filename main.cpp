#include <iostream>
#include "Point.h"

int main() {
    Point D3;
    Point D1;
    string line;
    ifstream myfile ("input.dat");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    cout << "Enter the value of object : " << endl;
    cin >> D3;
    cout << "Third Point :" << D3 << endl;

    ofstream outfile;
    outfile.open("output.dat", ios::out);
    outfile << D3;
    outfile.close();



    string line2;
    ifstream myfile2 ("output.dat");
    if (myfile.is_open())
    {
        while ( getline (myfile2,line2) )
        {
            cout << line2 << '\n';
        }
        myfile2.close();
    }


    else cout << "Unable to open output file";


    return 0;
}