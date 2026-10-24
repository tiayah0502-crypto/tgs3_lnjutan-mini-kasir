
#include <iostream>
using namespace std;

int main() {
    string makanan[5] = {"soto", "rawon", "pecel", "es teh", "kopi"};
    int harga[5] = {15000, 20000, 10000, 3000, 5000};
    int i;
    int porsi[5];
    int total;
    string ulang;

    do {
        for (i = 0; i < 5; i++) {
            cout << "makanan" << endl;
            cout << makanan[i] << endl;
            cout << "harga" << endl;
            cout << harga[i] << endl;
            cout << "porsi";
            cin >> porsi[i];

            total = harga[i] * porsi[i];

            cout << "total" << endl;
            cout << total << endl;
            cout << "************_________************" << endl;
        }

        cout << "anda mau mengulang tekan y atau Y";
        cin >> ulang;

    } while (ulang == "y" || ulang == "Y");

    system("pause"); 
    return 0;
}
