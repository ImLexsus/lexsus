#include<iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main (){
    int a = 5;
    cout << "address a " << &a << endl;
    cout << "  nilai a " << a << endl << endl;

    //fungsi dengan input pointer
    fungsi(&a);
    kuadrat(&a);

    cout << "nilai a kuadrat" << a << endl;

    cin.get ();
    return 0;
}

void fungsi(int *b){
    cout << "address b " << b << endl;
    cout << "  nilai b " << *b << endl << endl; //dereferencing
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}