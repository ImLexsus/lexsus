#include<iostream>
using namespace std;

//reporter
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

//worker
void tampilkan(int input){
    cout << "menampilkan dengan void\n";
    cout << input << endl;
}

int main(){

    int input, hasil;
    cout << "Nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    cin.get();
    return 0;
}