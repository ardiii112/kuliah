#include <iostream>
using namespace std;
main()
{
cout<<"PROGRAM HITUNG LUAS DAN VOLUME BOLA"<<endl;
 cout<<"+----------------------------------+"<<endl;
 
 float pi=3.14,volume,luas,r;
 cout<<"Masukkan Jari-Jari Bola :"; cin>>r;cout<<endl;
 
 volume=pi*r*r*r*4/3;
 luas=4*pi*r*r;
 
 cout<<"Volume Dan Luas Bola Dengan Jari - Jari :"<<r<<endl;
 cout<<"Volume :"<<volume<<endl;
 cout<<"Luas   :"<<luas<<endl;
}