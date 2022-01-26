#include <iostream>
using namespace std;

void nama()
{
    string nama;

    cout << "Masukan Nama : ";
    getline(cin, nama);
}

void nim()
{
    string nim;

    cout << "Masukan NIM : ";
    cin>>nim;
}

int main()
{
    nama() ;
    nim() ;
    return 0;
}