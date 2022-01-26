#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char nama [50] = "Ardi Sedahyu";
    char nim [12] = "20200801022";
    cout<<"-------------------------------"<< endl;
    cout<<nama<< endl;
    cout<<nim<<endl;
    cout<<"Memory Alokasi String : "<<sizeof(string)<<endl;
    cout<<"Alamat Memory Nama : "<<&nama<<endl;
    cout<<"Alamat Memory NIM : "<<&nim<<endl;
    cout<<"-------------------------------"<< endl;
    return 0;
}