#include<iostream>
using namespace std;

//prototype 
int faktorial(int n);

int main(){

    int angka, hasil;
    cout << "Menghitung nilai faktorial dari: ";
    cin >> angka;

    hasil = faktorial(angka);
    cout << "\nNilai faktorial dari " << angka << " adalah: "<< hasil << endl;


    cin.get();
    return 0;
}

int faktorial(int n){
    if (n <= 1){
        cout << n;
        return n;
    }else{
        cout << n << "*";
        return n * faktorial(n-1);
    }
}