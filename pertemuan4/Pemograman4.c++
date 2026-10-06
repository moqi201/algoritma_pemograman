#include <iostream>
using namespace std;

// Deklarasi fungsi (prototype)
void judul();
int fungsiX(int x);

int main() {
    int angka = -1;

   
    judul();

    while (true) {
        cout << "Masukan angka (0 untuk berhenti): ";
        cin >> angka;

        if (angka == 0) {
            cout << "Program selesai. Terima kasih!" << endl;
            break;
        }

        cout << "Hasil fungsi: " << fungsiX(angka) << endl << endl;
    }

    return 0;
}

void judul() {
    cout << "************************" << endl;
    cout << "Program menghitung hasil" << endl;
    cout << " fungsi 3x^2 + 5x + 4"    << endl;
    cout << "************************" << endl;
}

int fungsiX(int x) {
    return 3 * x * x + 5 * x + 4;
}