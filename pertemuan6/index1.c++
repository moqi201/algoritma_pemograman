#include <iostream>
#include <cstdlib>
#include "input.h"
using namespace std;
void cari1(int data1[], int jml, int d, int *dx);
int main()
{
    system("cls");
    inputNama();
    int data1[] = {10, 2, 12, 4, 30, 100};
    int d, k, jml = 6;
    int dx;
    cout << "Elemen Array : ";
    for (k = 0; k < jml; k++)
        cout << data1[k] << " ";
    cout << endl;
    cout << "Masukan data yang akan dicari ? ";
    cin >> d;
    cari1(data1, jml, d, &dx);
    if (dx != -1)
        cout << "Data yang dicari ditemukan pada indeks ke- "<<dx<<endl ;
    else cout << "Data yang dicari tidak ada dalam array "<<endl ;
}
void cari1(int data1[], int jml, int d, int *dx)
{
    int k = 0;
    while (k < jml - 1 && data1[k] != d)
        k++;
    if (data1[k] == d)
        *dx = k;
    else
        *dx = -1;
}