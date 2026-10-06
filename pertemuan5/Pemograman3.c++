#include <iostream>
using namespace std;
void penghitung(); // prototipe fungsi
int main()
{
    penghitung(); // panggilan 1
    penghitung(); // panggilan 2
    penghitung(); // panggilan 3
}
void penghitung()
{
    static int cnt = 0; // inisialisasi variabel statis
    cnt++;              // increment
    cout << "Dipanggil " << cnt << " kali" << endl;
}
