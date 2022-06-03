#include<iostream>
using namespace std;

class BaseProject{
	public:
		void input();
		void proses();
		void output();
	private:
		int dtCari,jmlData,hslCari,temp;
		int pilihan1,pilihan2;
		int final_nim,nim[100];
		string final_nama,nama[10],final_prodi,prodi[10],final_notelp,notelp[10];
		string lanjut;
		char pilihan;
			
};
void BaseProject::input(){
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

void BaseProject::proses(){
  //mencari data
	cout<<"1. Mencari data"<<endl;
	cout<<"2. Mengurutkan NIM"<<endl;
	cout<<"Pilihan : "; cin>>pilihan1;
	switch(pilihan1){
		case 1 : 
  		cout<<"Masukkan NIM yang ingin dicari : "; cin>>dtCari;
  		for(int b=0; b<jmlData; b++){
  			if(dtCari==nim[b]){
  				hslCari++;
  			}
  		}
  		if(hslCari==0){
  			cout<<"Data tidak ditemukan "<<endl;
  		}
  		else{
  			cout<<"Data ditemukan "<<endl;
  			for(int c=0; c<jmlData; c++){
  				if(dtCari==nim[c]){
  					final_nama = nama[c];
  					final_nim = nim[c];
  					final_prodi=prodi[c];
  					final_notelp=notelp[c];
  				}
  			}
  		}
  		break;
		
		case 2:
      cout<<"1. Terkecil > Terbesar "<<endl;
			cout<<"2. Terbesar > Terkecil "<<endl;
			cout<<"Pilihan : "; cin>>pilihan2;
			switch(pilihan2){
				case 1 : 
  				for(int i = 0; i<jmlData; i++){
  					for(int j=0; j<jmlData; j++){
  						if(nim[j]>nim[j+1]){
  							temp = nim[j];
  							nim[j] = nim[j+1];
  							nim[j+1] = temp;
  						}
  					}
  				}
  				break;
				case 2 : 
  				for(int i = 0; i<jmlData; i++){
  					for(int j = 4; j>=i; j--){
  						if(nim[j]>nim[j-1]){
  							temp = nim[j];
  							nim[j] = nim[j-1];
  							nim[j-1] = temp;
  						}
  					}
  				}
  				break;
			}
	}
}

void BaseProject::output(){
	if(dtCari==final_nim){
  	cout<<"NAMA : "<<final_nama<<endl;
  	cout<<"NIM : "<<final_nim<<endl;
  	cout<<"PRODI : "<<final_prodi<<endl;
  	cout<<"No Telp : "<<final_notelp<<endl;
 	}
 	else{
 		cout<<"URUTAN NIM : "<<endl;
 		if(pilihan2== 1){
 			for(int x=1; x<=jmlData; x++){
 				cout<<"["<<x<<"]"<<nim[x]<<endl;
 			}
 		}
 		if(pilihan2 == 2){
			for(int x=0; x<=jmlData; x++){
 				cout<<"["<<x+1<<"]"<<nim[x]<<endl;	
 		  }
 	  }
  }
}