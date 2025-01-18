#include<iostream>
using namespace std;

int main()
{
    // assignment
    int a = 10;

    cout<< "Nilai awal a adalah "<<a<<endl;
    cout<< "Dari sebuah assignment yaitu a(+-*/%)= 3"<<endl;

    //assignment operator
    //variable = variable operator ekspresi
    //   a     =    a       +-/*%   1,2,...
    //variable operator= ekspresi
    //   a       +-*/  =  1,2,...

    a += 3;
    cout<<"Ditambah 3 menjadi: "<<a<<endl;

    a -= 3;
    cout<<"Dikurangi 3 menjadi: "<<a<<endl;

    a *= 3;
    cout<<"Dikali 3 menjadi: "<<a<<endl;

    a %= 3;
    cout<<"Dimodulus 3 menjadi: "<<a<<endl;

    cin.get();
    return 0;
}