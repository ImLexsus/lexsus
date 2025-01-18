#include<iostream>
using namespace std;

int main(){

    // variable
    int a = 5;

    cout << "Adress dari a " << &a << endl;
    cout << " nilai dari a " << a << endl << endl;

    // reference
    int &b = a;
    cout << " nilai dari b " << b << endl;
    cout << "address dari b adalah " << &b << endl << endl;

    b = 10;
    cout << "nilai dari a " << a <<endl;
    cout << "nilai dari b " << b << endl << endl;

    a = 20;
    cout << "nilai dari a " << a <<endl;
    cout << "nilai dari b " << b << endl << endl;


    cin.get();
    return 0;
}