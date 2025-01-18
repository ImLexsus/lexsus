#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

void myFunction(string nama, string no_bp)
{

        cout<<"Hai, perkenalkan nama saya "<<nama<<"."<<endl;
	cout<<"Saya mahasiswa teknik elektro dengan NO. BP "<<no_bp<<"."<<endl;
}

int main()
{
        string nama, no_bp;
        cout<<"masukkan nama:";
        getline(cin, nama);

        cout<<"masukkan NO BP:";
        getline(cin, no_bp);

        myFunction(nama, no_bp);

return 0;
}
