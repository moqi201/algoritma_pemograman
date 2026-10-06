#include <iostream>
#include <cstdlib>
#include "input.h"
#define jmldt 10
using namespace std;
void cari5(int data5[], int jml, int cari, int *dx);
int main()
{
    inputNama();
    int data5[jmldt] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10}, cari, dx, awal;
    cout << "Elemen Array : ";
    for (awal = 0; awal < jmldt; awal++)
        cout << data5[awal] << " ";
    cout << endl;
    cout << "Masukan data yang akan dicari ?:";
    cin >> cari;
    cari5(data5, jmldt, cari, &dx);
    if (dx != -1)
        cout << "Data yang dicari berada pada indeks : " << dx << endl;
    else
        cout << "Data yang dicari tidak ada dalam array" << endl;
}
void cari5(int data5[], int jml, int cari, int *dx)
{
    bool ketemu = false;
    int akhir = jml - 1, awal = 0, c;
    while (awal <= akhir && !ketemu)
    {
        c = (awal + akhir) / 2;
        if (data5[c] == cari)
            ketemu = true;
        else if (data5[c] < cari)
            akhir = c - 1;
        else
            awal = c + 1;
    }
    if (ketemu)
        *dx = c;
    else
        *dx = -1;
}