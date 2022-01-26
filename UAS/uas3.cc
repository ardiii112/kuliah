#include<iostream>
#include<fstream>
using namespace std;
void create(){
    string isi;
    ofstream txt;
    txt.open("soalgenap.txt", ios::app);
    cout<<"Masukkan isi :";
    cin>>isi;
    txt<<isi;
    txt<<endl;
    txt.close();
}
void read(){
    string isi;
    ifstream txt ("soalgenap.txt");
    if(txt.is_open()){
        while(! txt.eof()){
            getline(txt, isi);
            cout<<isi<<endl;
            cout<<endl;
        }
    } 
}
int main(){
    int pil;
    main:
    cout<<"Pilihan Menu"<<endl;
    cout<<"1. Create"<<endl;
    cout<<"2. Read"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Masukkan Pilihan :";
    cin>>pil;
    switch(pil){
        case 1:
            create();
            goto main;            
            break;
        case 2:
            read();
            goto main;
            break;
        case 3:
            return 0;
    }
}