#include<iostream>
using namespace std;

int main(){

    // Membuat Array
    int nilai[6];
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;
    nilai[5] = 5;

    cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
    cout << &nilai[5] << " nilainya adalah: " << nilai[5] << endl;

    int *ptr = nilai;
    *(ptr + 2) = 6;

    nilai[3] = 7;

    cout << endl;
    cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
    cout << &nilai[5] << " nilainya adalah: " << nilai[5] << endl;

    cout << endl;
    cout << "Ukuran array = " << sizeof(nilai) << " byte" << endl;
    cout << "Jumlah member array = " << sizeof(nilai)/sizeof(int) << endl;

    cin.get();
    return 0;
}
