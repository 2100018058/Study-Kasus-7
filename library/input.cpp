#include "base.h"
using namespace std;

void BaseProject::input(){
  //data masuk
  cout<<"Masukkan banyak data Mahasiswa : ";
  cin>>jmlData;
    for(int a; a<jmlData; a++){
    cout<<"["<<a+1<<"]"<<"Nama : "; cin>>nama[a];
    cout<<"["<<a+1<<"]"<<"NIM : "; cin>>nim[a];
    cout<<"["<<a+1<<"]"<<"PRODI : "; cin>>prodi[a];
    cout<<"["<<a+1<<"]"<<"No Telp : "; cin>>notelp[a];
    cout<<endl;
    }
  cout<<endl;
cout<<"========================================"<<endl;
cout<<"Data yang Tersedia"<<endl;
for(int a=0; a<jmlData; a++){
  cout<<"["<<a+1<<"]"<<"NAMA : "<<nama[a]<<endl;
  cout<<"["<<a+1<<"]"<<"NIM : "<<nim[a]<<endl;
  cout<<"["<<a+1<<"]"<<"PRODI : "<<prodi[a]<<endl;
  cout<<"["<<a+1<<"]"<<"No Telp : "<<notelp[a]<<endl;
cout<<endl;
}
cout<<endl;
}
