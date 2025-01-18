#include<iostream>
#include<cstdlib> //mengandung fungsi random
using namespace std;

int main(){

    char lanjut;
    while(true){
        cout << "Lempar dadu? (y/n)";
        cin >> lanjut;

        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl; // 1+ agar nilai random dimulai dari 1
        }else if(lanjut == 'n'){              // % 6 agar angka random sampai 6
            break;
        }else{
            cout << "Warning!! \nMasukkan input y/n \n";
        }
    }

    cout << "Terimakasih sudah bermain dadu" << endl;

    cin.get();
    return 0;
}