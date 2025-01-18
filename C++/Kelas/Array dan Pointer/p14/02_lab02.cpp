#include<iostream>
using namespace std;

int main(){

    int angka[4];
    angka[0] = 14;
    angka[1] = 76;
    angka[2] = 80; 
    angka[3] = 11;

    int terbesar = 0;
    if(angka[0] > terbesar){
        terbesar = angka[0];
    }
    if(angka[1] > terbesar){
        terbesar = angka[1];
    }
    if(angka[2] > terbesar){
        terbesar = angka[2];
    }
    if(angka[3] > terbesar){
        terbesar = angka[3];
    }
    cout << "angka terbesar adalah: " << terbesar << endl;

    cout<< "Fathurrahman Ahmadi 2410953003" << endl;

    return 0;
}
 