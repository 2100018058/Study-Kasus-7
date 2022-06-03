#include "base.h"
using namespace std;

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