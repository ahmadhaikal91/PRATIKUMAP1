#include <iostream>
#include <string>
using namespace std;

string konversiPassword(string password) {
    string passwordTersimpan = "";

    if (password.length() != 8) {
        cout << "Password harus terdiri dari 8 digit." << endl;
        return "";
    }

    bool huruf[26] = {false};
    bool angka[10] = {false};

    for (char c : password) {
        if (!isalnum(c) || c == ' ' || huruf[c - 'a'] || angka[c - '0']) {
            cout << "Password tidak valid." << endl;
            return "";
        }

        if (isalpha(c)) {
            c = (char)(c + 2); // Konversi huruf dua step sesudahnya
            huruf[c - 'a'] = true;
        } else if (isdigit(c)) {
            c = (char)(c + (c - '0')); // Konversi 2 kali angka yang diinput
            angka[c - '0'] = true;
        }

        passwordTersimpan += c;
    }

    return passwordTersimpan;
}

int main() {
    string password;
    cout << "Masukkan password (8 digit, tidak ada huruf/angka yang berulang, tanpa spasi): ";
    cin >> password;

    string passwordTersimpan = konversiPassword(password);

    if (passwordTersimpan != "") {
        cout << "Password yang dimasukkan: " << password << endl;
        cout << "Password yang tersimpan (setelah konversi): " << passwordTersimpan << endl;
    }

    return 0;
}

