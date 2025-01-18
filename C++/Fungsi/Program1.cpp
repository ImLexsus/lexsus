#include <iostream>
using namespace std;

void myFunction(string nama, string nim, string kampus, string jurusan) 
{

    cout<<"Hay, perkenalkan nama saya "<<nama<<", dengan nomor induk mahasiswa "<<nim<<"."<<endl;
    cout<<"Saat ini saya tengah berkuliah di "<<kampus<<", dengan jurusan "<<jurusan<<"."<<endl;

}

int main() 
{
    string nama, nim, kampus, jurusan;
    cout<<"Masukkan nama:";
    getline(cin, nama);

    cout<<"Masukkan NIM:";
    getline(cin, nim);

    cout<<"masukkan nama kampus:";
    getline(cin, kampus);

    cout<<"masukkan prodi:";
    getline(cin, jurusan);



    myFunction(nama, nim, kampus, jurusan);
    return 0;
}