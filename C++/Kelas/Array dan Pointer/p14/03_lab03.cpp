#include<iostream>
using namespace std;

int main(){

    int angka[4];
    angka[0] = 14;
    angka[1] = 76;
    angka[2] = 80; 
    angka[3] = 11;

    int terbesar = 0;
    for (int i = 0; i < 4; i++){
        if(angka[i] > terbesar){
            terbesar = angka[i];
        }
    }
    
    cout << "angka terbesar adalah: " << terbesar << endl;
    
    return 0;
}
 