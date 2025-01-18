#include<iostream>
using namespace std;

int main()
{
    /*
    
    while==>syatat dulu baru aksi
    while(syarat){
    aksi;
    }

    do==>aksi dlu baru syarat
    do{aksi
    }while(syarat);

    */

   int a=1;
   do{
        cout<<"hore ";
        cout<<a<<endl;
        a++;
   }while(a<=10);

   
   cout<<"selesai"<<endl;

    cin.get();
    return 0;
}