#include<iostream>
using namespace std;

void copy(string *);

int main(){
    string sumber = "2410953003";

    cout << "Nilai dari sumber adalah: " << sumber << endl;
    copy(&sumber);
    cout << "Tugas Pointer Fathurrahman Ahmadi" << endl;

return 0;
}

void copy(string *b){
    cout << "Nilai dari hasil copy pointer adalah: " << *b << endl;
}