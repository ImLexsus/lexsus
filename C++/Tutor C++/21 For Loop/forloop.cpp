#include<iostream>
using namespace std;

int main()
{   
    cout<<"loop 1"<<endl;
    //      inisiasi,    loop kondisi,  increment
    for(int i = 1; i <= 10; i++ ){
        cout << i << endl;
    }

    cout<<"\n loop 2"<<endl;
    //      inisiasi,    loop kondisi,  increment
    for(int i = 1; i <= 10; i += 2 ){
        cout << i << endl;
    }

    cout<<"\n loop 3"<<endl;
    //      inisiasi,    loop kondisi,  increment
    for(int i = 1; i >= -10; i-- ){
        cout << i << endl;
    }

    cout<<"\n loop 4"<<endl;
    int total = 0;
    //      inisiasi,    loop kondisi,  increment
    for(int i = 1; i <= 10; i++, total += i ){
        cout << i << "||" << total << endl;
    }

    cin.get();
    return 0;
}