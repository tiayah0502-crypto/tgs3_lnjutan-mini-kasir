#include <iostream>
#include <string>
using namespace std;

int main() {
    string makanan[5] = {"soto", "rawon", "pecel", "teh", "kopi"};
    int harga[5] = {15000, 20000, 1000, 3000, 5000};

    int i;
    int porsi[5];
    int total;
    int total_semua;
    string ulang;

    do {
        total_semua = 0;

        for (i = 0; i < 5; i++) {
            cout << "Menu: " << makanan[i] << endl;
            cout << "Harga: " << harga[i] << endl;

            cout << "Porsi: ";
            cin >> porsi[i];

            total = harga[i] * porsi[i];

            cout << "Total: Rp" << total << endl;

            total_semua = total_semua + total;

            cout << "************_________************" << endl;
        }

        cout << "================================" << endl;
        cout << "TOTAL KESELURUHAN: Rp" << total_semua << endl;
        cout << "================================" << endl;

        cout << "Anda mau mengulang? Tekan y atau Y: ";
        cin >> ulang;

    } while (ulang == "y" || ulang == "Y");

    return 0;
}

