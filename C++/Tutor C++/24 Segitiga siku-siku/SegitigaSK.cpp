#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Masukkan panjang pola segitiga: ";
    cin >> n;

    
    cout<< "pola 5\n";
    for ( int i = 1; i <= n; i++)
    {
        for ( int j = n; j > i; j--)
        {
            cout<< " ";
        }
        for ( int k = 1; k <= (i*2-1); k++)
        {
            cout<< "*";
        }
        cout<< endl;
    }

    cout<< "pola 6\n";

    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 1; j < i; j++)
        {
            cout<< " ";
        }
        for ( int k = n; k >= (2*i-n); k--)
        {
            cout<< "*";
        }
        cout<< endl;
    }


     cout<< "pola 7\n";
    for ( int i = 1; i <= n; i++)
    {
        for ( int j = n; j > i; j--)
        {
            cout<< " ";
        }
        for ( int k = 1; k <= (i*2-1); k++)
        {
            cout<< "*";
        }
        cout<< endl;
    }

    for ( int i = 2; i <= n; i++)
    {
        for ( int j = 1; j < i; j++)
        {
            cout<< " ";
        }
        for ( int k = n; k >= (2*i-n); k--)
        {
            cout<< "*";
        }
        cout<< endl;
    }

    cin.get();
    return 0;
}