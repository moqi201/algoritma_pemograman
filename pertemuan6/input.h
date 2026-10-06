#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <string>
using namespace std;

void inputNama()
{
    string nama, nim;

    cout << "Nama : ";
    getline(cin, nama);

    cout << "NIM  : ";
    getline(cin, nim);
    
    cout << "======================================================================================================\n";
    cout << "HALOOOO :"<<nama << "\n" ;
    cout << "NIM nya :"<<nim ;
    cout << endl;
    cout << "======================================================================================================\n";
}

#endif