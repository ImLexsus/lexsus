#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout<<"selamat datang di program kalkulator "<<endl;

    //masukkan input dari user
    cout<<"Masukkan nilai pertama:";
    cin>>a;
    cout<<"Pilih operator +,-,*,/:";
    cin>>aritmatika;
    cout<<"Masukkan nilai kedua:";
    cin>>b;

    cout<<"Hasil perhitungan: ";
    cout<<a<<aritmatika<<b<<endl;

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;
    
    default:
        cout<<"Nilai input anda salah!"<<endl;
        break;
    }

    cout<<" = "<<hasil<<endl;

    cin.get();
    return 0;
}