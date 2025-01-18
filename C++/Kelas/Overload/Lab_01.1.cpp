#include<iostream>
using namespace std;

void lingkaran (float& radius, float& luas, float& keliling){
    luas = 3.14*radius*radius;
    keliling = 2*3.14*radius;
    radius = 2*radius;
}

//& setelah proses selesai luas 
int main(){

    float r1, l1, k1;
    r1 = 10;
    lingkaran(r1, l1, k1);
    cout << "Diameter: " << r1 << endl;
    cout << "luas: " << l1 << endl;
    cout <<"keliling: " << k1 << endl;

return 0;
}