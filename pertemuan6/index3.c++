#include <iostream>
#include <cstdlib>
#include "input.h"
using namespace std;
void cari3(int data3[], int jml, int d, int *dx);
int main()
{
    system("cls");
    inputNama();
    int data3[] = {20, 12, 120, 9, 8, 40};
    int d, m, jml = 6;
    int dx;
    cout << "Elemen Array : ";
    for (m = 0; m < jml; m++)
        cout << data3[m] << " ";
    cout << endl;
    cout << "Masukan data yang akan dicari ? ";
    cin >> d;
    cari3(data3, jml, d, &dx);
    if (dx != -1)
        cout << "Data yang dicari ditemukan pada indeks ke-"<<dx<<endl;
    else cout<< "Data yang dicari tidak ada dalam array" << endl;
}
void cari3(int data3[], int jml, int d, int *dx)
{
    int m = 0;
    while (m < jml - 1 && data3[m] != d)
        m++;
    if (data3[m] == d)
        *dx = m;
    else
        *dx = -1;
}