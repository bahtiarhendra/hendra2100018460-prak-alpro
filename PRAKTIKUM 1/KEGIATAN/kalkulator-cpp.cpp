#include<iostream>

using namespace std;

int main(){
	float a,b,hasil;
	char kalkulator;
	
	cout<<"SELAMAT DATANG DI PROGRAM KALKULATOR\n"<<endl;
	cout<<"MASUKAN ANGKA PERTAMA = ";
	cin>>a;
	cout<<"PILIH OPERATOR +,-,/,* : ";
	cin>>kalkulator;
	cout<<"MASUKAN ANGKA KEDUA = ";
	cin>>b;
	cout<<"Hasil Perhitungan ";
	cout<< a << kalkulator << b;
	
	if(kalkulator=='+'){
		hasil = a+b;
	}
	else if(kalkulator=='-'){
		hasil = a-b;
	}
	else if(kalkulator=='/'){
		hasil = a/b;
	}
	else if(kalkulator=='*'){
		hasil = a*b;
	}
	else{
		cout<<"operator anda salah "<<endl;
	}
	cout<<" = "<< hasil <<endl;
	
	return 0;
}
