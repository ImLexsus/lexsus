#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int* r_x = &x;

    cout << "x = " << x << endl;
    
    x = 11;
    cout << "x ganti = " << x << endl;
    cout << "r_x = " << *r_x <<endl; 
    cout << "alamat x = " << &x << endl;
    cout << "alamat r_x = " << r_x << endl;   
    return 0;
}