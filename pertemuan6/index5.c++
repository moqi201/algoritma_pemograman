#include <iostream>
#include <cstdlib>
#include "input.h"
using namespace std;
void cari5(int data5[], int jml, int cari, int *dx);
int main()
{
    system("cls");
    inputNama();
    int data5[] = {20, 12, 120, 9, 8, 40};
    int cari = 12, m, jml = 6;
    int dx;
    cout << "Elemen Array : ";
    for (m = 0; m < jml; m++)
        cout << data5[m] << " ";
    cout << endl;
    cout << "Data yang dicari adalah " << cari;
    cari5(data5, jml, cari, &dx);
    if (dx != -1)
        cout << "\nData yang dicari ditemukan pada indeks ke-"<<dx<<endl;
    else cout
             << "\nData yang dicari tidak ditemukan" << endl;
}
void cari5(int data5[], int jml, int cari, int *dx)
{
    int m;
    for (int m = jml - 1; m >= 0; m++)
    {
        if (data5[m] == cari)
            break;
    }
    if (data5[m] == cari)
        *dx = m;
    else
        *dx = -m;
}