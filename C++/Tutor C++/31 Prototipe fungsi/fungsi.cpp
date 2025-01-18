#include<iostream>
using namespace std;


//prototipe
double hitung_luas(double p, double l);
void println(double x);

int main(){



    double panjang, lebar, luas;
    cout << "nilai panjang: ";
    cin >> panjang;
    cout << "nilai lebar: ";
    cin >> lebar;
    
    luas = hitung_luas(panjang, lebar);

    cout << "maka luas adalah: ";
    println(luas);

    cin.get();
    return 0;
}

double hitung_luas(double p, double l){
    return p * l;
}

void println(double x){
    cout << x << endl;
}