#include "base.h"
using namespace std;

void Baseproject::output(){
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