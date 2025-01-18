#include<iostream>
using namespace std;

//You can loop through the array elements with the for loop.
//The following example outputs all elements in the cars array

int main(){

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++){
        cout << cars[i] << "\n";
    }

    cin.get();
    return 0;
}
