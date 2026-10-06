#include <iostream>
#include <cstdlib>
#include "input.h"
#define jmldt 6
using namespace std;
void cari3(int data3[], int jml, int cari, int *dx);
int main()
{
    inputNama();
    int data3[jmldt] = {60, 50, 40, 30, 20, 10}, cari, dx, awal;
    cout << "Elemen Array : ";
    for (awal = 0; awal < jmldt; awal++)
        cout << data3[awal] << " ";
    cout << endl;
    cout << "Masukan data yang akan dicari ?:";
    cin >> cari ;
    cari3(data3, jmldt, cari, &dx);
    if (dx != -1)
        cout << "Data yang dicari berada pada indeks :"<<dx<<endl;
            else cout
             << "Data yang dicari tidak ada dalam array" << endl;
}
void cari3(int data3[], int jml, int cari, int *dx)
{
    bool ketemu = false;
    int akhir = jml - 1, awal = 0, c;
    while (awal <= akhir && !ketemu)
    {
        c = (awal + akhir) / 2;
        if (data3[c] == cari)
            ketemu = true;
        else if (data3[c] < cari)
            akhir = c - 1;
        else
            awal = c + 1;
    }
    if (ketemu)
        *dx = c;
    else
        *dx = -1;
}
