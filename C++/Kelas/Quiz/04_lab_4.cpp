#include<iostream>
using namespace std;

int main(){
    double* px = new double;
    *px = 10.54;
    cout << "nilai px = " << *px << endl;
    cout << "alamat px = " << px << endl;
    delete px;
    cout << "nilai px = " << *px << endl;
    cout << "alamat px = " << px << endl;

    return 0;
}