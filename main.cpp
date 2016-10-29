#include <iostream>
#include "Point.h"

int main() {
    Point D3;

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


    ofstream myfile2("input.dat");
    if (!myfile2.is_open()) {
        cerr << "couldn't open output.dat" << endl;
        return -1;
    }
    myfile2 << D3;
    cout << "myfile :" << D3 << endl;




    ofstream outfile;
    outfile.open("output.dat", ios::out);
    outfile << D3;
    outfile.close();



    string line2;
    if (myfile2.is_open())
    {
        while ( getline (myfile, line2) )
        {
            cout << 'line 2: ' << line2 << '\n';
        }
        outfile.close();
    }


    else cout << "Unable to open output file";


    return 0;
}