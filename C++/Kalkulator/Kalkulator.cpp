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

    if (aritmatika == '+'){
    hasil = a + b;
}   else if (aritmatika == '-'){
    hasil = a - b;
}   else if (aritmatika == '*'){
    hasil = a * b;
}   else if (aritmatika == '/'){
    hasil = a / b;
}   else {
        cout<<"Operator anda salah!!"<<endl;
}

    cout<<" = "<<hasil<<endl;

    cin.get();
    return 0;
}