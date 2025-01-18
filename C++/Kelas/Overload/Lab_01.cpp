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

void lingkaran(double diameter){
    float luas = 3.14*diameter*diameter/4;
    cout << "Luas lingkaran dengan diameter "<< diameter << " adalah " << luas <<endl;
}

int main(){

    float r1, l1, k1;
    r1 = 10;
    lingkaran(r1, l1, k1);
    cout << "luas: " << l1 << endl;
    cout <<"keliling: " << k1 << endl;


float r = 14;   //perhatikan tipe data
double d = 20;

lingkaran(d);
lingkaran(r);
return 0;
}