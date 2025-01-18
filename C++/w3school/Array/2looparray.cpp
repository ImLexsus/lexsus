#include<iostream>
using namespace std;

int main(){

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++){
        //This example outputs the index of each 
        //element together with its value
        cout << i << " = " << cars[i] << "\n";
    }

    cin.get();
    return 0;
}
