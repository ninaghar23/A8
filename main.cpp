#include <iostream>
#include "Point.h"

int main() {
    Point D3;
    fstream treeFile;
    string line;
    treeFile.open ("input.dat");
    if (treeFile.is_open())
    {
        while ( getline (treeFile,line) )
        {
            treeFile >> line;
        }
        treeFile.close();
    }

    else cout << "Unable to open file";

    cout << "Enter the value of object : " << endl;
    cin >> D3;
    treeFile << "Third Point :" << D3 << endl;

    ofstream treeFilef;
    treeFilef.open("input.dat");
    if (!treeFilef.is_open()) {
        cerr << "couldn't open output.dat" << endl;
        return -1;
    }
    treeFilef << D3;
    cout << "treeFilef :" << D3 << endl;




    ofstream outfile;
    outfile.open("output.dat", ios::out);
    outfile << D3;
    outfile.close();



    string line2;
    if (treeFilef.is_open())
    {
        while ( getline (treeFile, line2) )
        {
            cout << "line 2: " << line2 << '\n';
        }
        outfile.close();
    }


    else cout << "Unable to open output file";


    return 0;
}
