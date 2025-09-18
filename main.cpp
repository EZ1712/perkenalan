#include <iostream>

using namespace std;

int main() {

    // Deklarasi

    // Versi 1
    /* 
    string nama_depan;
    string nama_belakang;
    string nama_lengkap;
    */

    // Versi 2
    string nama;

    string alamat;

    int umur;

    char gender;
    string jenis_kelamin;

    string kelas;

    string hobi;

    // Eksekusi

    cout << "Program perkenalan \n \n";

    // Versi 1
    /*
    cout << "masukan nama depan : ";
    cin >> nama_depan;
    cout << "masukan nama belakang : ";
    cin >> nama_belakang;
    nama_lengkap = nama_depan + " " + nama_belakang;
    */

    // Versi 2
    cout << "masukan nama : ";
    getline(cin,nama);

    cout << "masukan alamat : ";
    cin >> alamat;

    cout << "masukan umur : ";
    cin >> umur;

    cout << "masukan jenis kelamin (L/P) : ";
    cin >> gender;
    if (gender == 'L') {
        jenis_kelamin = "Laki-Laki";
    } else if (gender == 'P') {
        jenis_kelamin = "Perempuan";
    } else {
        jenis_kelamin = "Anomali";
    }

    cout << "masukan kelas : ";
    cin >> kelas;

    cout << "masukan hobi : ";
    cin >> hobi;



    // Hasil
    
    cout << endl << "perkenalan \n \n";
    cout << "Perkenalkan nama saya " << nama << " ,saya dari " << alamat << " dan saya berumur "<< umur << " ,saya berjenis kelamin " << jenis_kelamin << " dan saya sekarang berada di kelas " << kelas << " ,hobi saya yaitu " << hobi;

    return 0;
}

// cin.ingnore()
// getline(cin.variabel)