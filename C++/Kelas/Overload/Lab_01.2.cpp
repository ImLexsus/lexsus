#include<iostream>
using namespace std;

void lingkaran (float& radius, float& luas, float& keliling){
    luas = 3.14*radius*radius;
    keliling = 2*3.14*radius;
    radius = 2*radius;
}

//& setelah proses selesai luas 

void lingkaran(float radius){
    float luas = 3.14*radius*radius;
    cout << "Luas lingkaran dengan jari-jari "<< radius << " adalah " << luas <<endl;
}

int main(){

    float r1, l1, k1;
    r1 = 10;
    lingkaran(r1, l1, k1);
    cout << "luas: " << l1 << endl;
    cout <<"keliling: " << k1 << endl;

lingkaran(20);
return 0;
}