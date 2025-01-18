#include<iostream>
using namespace std;

void printMatriks(int *ptrMatriks, int baris, int kolom);

int main(){

    // array multi dimensi
    // array [baris][kolom]
    int baris = 3;
    int kolom = 4;

    int Matriks[baris] [kolom] = {
        {0, 1, 2, 4},
        {1, 0, 9, 5}, 
        {3, 0, 0, 3}
    };

    cout << " Tugas Array matriks 3x4" << endl;

    printMatriks(*Matriks, baris, kolom);

    cout << " Oleh Fathurrahman Ahmadi" << endl;

    return 0;
}

void printMatriks(int *ptrMatriks, int baris, int kolom){
    int index = 0;
    for(int i = 0; i <baris; i++){
        cout << "| ";
        for(int j = 0; j < kolom; j++){
            cout << *(ptrMatriks + index) << " ";
            index++;
        }
        cout << "|" <<endl;
    }
}