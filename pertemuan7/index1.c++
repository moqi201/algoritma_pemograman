#include <iostream>
#include <cstdlib>
#include "input.h"
using namespace std;
int main()
{
    system("cls");
    inputNama();
    int data1[] = {10, 11, 12, 24, 30, 100};
    int awal, akhir, c = -1, d = 30; // data yang dicari
    awal = 0, akhir = 5;
    while (awal <= akhir)
    {
        c = (awal + akhir) / 2;
        if (data1[c] == d)
        {
            cout << "data ditemukan pada index ke:" << c << endl;
            break;
        }
        else if (data1[c] > d)
            akhir = c - 1;
        else
            awal = c + 1;
    }
    if (data1[c] != d)
        cout << "data tidak ditemukan" << endl;
}