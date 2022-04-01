#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
    int jumlah_beli, bayar, pos,jarak, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_makanan;

    cout<<"======== Selamat datang di rumah makan cilebak ========"<<endl;
    cout<<"======================================================="<<endl<<endl;

	cout<<"\tMenu : "<<endl;
	cout<<"1. Ayam geprek   : Rp.21000"<<endl;
	cout<<"2. Ayam goreng   : Rp.17000"<<endl;
	cout<<"3. udang goreng  : Rp.19000"<<endl;
	cout<<"4. cumi goreng   : Rp.20000"<<endl;
	cout<<"5. Ayam bakar    : Rp.25000"<<endl<<endl;	
	cout<<"Masukan pesanan yang akan dibeli  "<<endl;
    cout<<"Jumlah makanan yang akan dibeli :";
    cin>> jumlah_beli;

    for (int i=0;i<jumlah_beli;i++){
        cout<<"\nMasukan Makanan ke- "<<i+1<<"\n\n";
        cin.ignore();
		cout<<"Nama Makanan : ";
        getline(cin,nama_makanan);
		
        cout<<"Jumlah Makanan : ";
        cin>>jumlah[i]; 

        cout<<"Harga Makanan : ";
        cin>>harga[i]; 

        total[i] = jumlah[i]*harga[i]; 
        total_semua += total[i]; 

    }
    cout<<"Jarak tempat pembelian (dalam KM) : "<<endl;
    cin>>jarak;
    if(jarak <= 3){
    	total_semua += 15000;
	}
	else if(jarak >= 3){
		total_semua +-25000;
	}
	total_semua=total_semua;
	
    cout<<"\t Total Pembelian ";
    cout<<"Jumlah Bayar : Rp."<<total_semua<<endl;
    
    cout<<"Total Bayar : Rp."<<total_semua<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<bayar-total_semua<<endl;
    
    cout<<endl<<endl;
	
		system("cls");

    if(total_semua>=25000){
        diskon=total_semua - 3000;
    }else if(total_semua>= 50000){
        diskon=0.15*total_semua;
    }else if(total_semua>= 150000){
        diskon=0.35*total_semua-8000;
    }else{
        diskon=0;
    }
    cout<<endl;
    
    ofstream aym;
		aym.open("ayam.txt",ios::out);
    aym<<"============== STRUK PEMBELIAN RUMAH MAKAN CILEBAK =============="<<endl;
    aym<<"================================================================="<<endl<<endl;
    
    
    aym<<"\nNo.  Makanan \t Jumlah        Harga \t    Total\n";
    for (int i=0; i<jumlah_beli; i++ ){
        aym<<i+1<<". "<<setw(8)<<nama_makanan<<setw(20)<<jumlah[i]<<setw(12)<<"Rp. "<<harga[i]<<setw(12)<<"Rp. "<<total[i]<<endl;
    }

    aym<<"Jumlah Bayar : Rp."<<total_semua<<endl;
    
    aym<<"Total Bayar : Rp."<<total_semua<<endl;
    aym<<"Bayar : Rp."<<bayar<<endl;
    aym<<"Kembalian : Rp."<<bayar-total_semua<<endl;
    aym.close();
    
	return 0;
}
