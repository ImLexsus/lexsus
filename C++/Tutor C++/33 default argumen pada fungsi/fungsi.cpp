#include<iostream>
using namespace std;

double volume_kubus(double p, double l, double t = 2); //prototype

int main(){

    cout << "Volume kubus: " << volume_kubus(3,4,5) << endl;
    cout << "Volume kubus: " << volume_kubus(3,4) << endl;

    cin.get();
    return 0;
}

// default argumen atau nilai standar
double volume_kubus(double p, double l, double t){
    return p * l * t;
}