#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
int input(){
    int jum_beli, bayar, diskon, jumlah[50], harga[50], sub_tot[50];
	string nama[100];
    float tot;
    cout<<"Masukan Jumlah Barang yang ingin Di Beli : ";
	cin>>jum_beli; 
	for (int i=0; i<jum_beli;i++)
	{
	    cout<<endl;
	    cout<<"Masukan Barang Ke-"<<i+1<<endl;
	    cout<<endl;
	    cout<<"Nama Barang : ";
	    cin>>nama[i]; 
	    cout<<"Jumlah      : ";
	    cin>>jumlah[i];
	    cout<<"Harga       : Rp. ";
	    cin>>harga[i]; 
	    sub_tot[i]=jumlah[i]*harga[i]; 
	    tot+=sub_tot[i]; 
	}
	cout<<endl;
	cout<<"Struk Belanja"<<endl;   
               cout<<"|============================================|"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++)
	{    cout<<i+1<<setw(8)<<nama[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; 
	}
      cout<<"|============================================|"<<endl;
	if (tot>=200000)
	{
	    cout <<"mendapat diskon 93 %"<<endl;
	    diskon=0.93*tot;
    }
	    cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	    cout<<"Dikon        : Rp."<<diskon<<endl; 
	    cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	    cout<<"Bayar        : Rp.";
	    cin>>bayar; 
	    cout<<"Kembalian    : Rp."<<(bayar-(tot-diskon))<<endl;  
	    cout<<"==============================================\n";
}
int jasa()
{
	int n, bayar, diskon,kembali, berat[50], jarak[50], sub_tot[50],kg=5000;
	string nama[100];
    float tot;
    cout<<"Masukan Jumlah Barang yang ingin Di kirim : ";
	cin>>n; 
	for (int i=0; i<n;i++)
	{
	    cout<<endl;
	    cout<<"Masukan Barang Ke-"<<i+1<<endl;
	    cout<<endl;
	    cout<<"Nama Barang      : ";
	    cin>>nama[i]; 
	    cout<<"Berat Barang     : ";
	    cin>>berat[i];
	    cout<<"Jarak Pengiriman : ";
	    cin>>jarak[i]; 
	    cout<<"Berat Barang Perkilogram: Rp. 5.000"<<endl;
	    sub_tot[i]=berat[i]*kg; 
	    tot+=sub_tot[i]; 
	    cout<<endl;
    }
    		cout<<"Total Pembayaran Keseluruhan : Rp. "<<tot<<endl;
    		cout<<"Bayar     : Rp. ";
    		cin>>bayar;
   			cout<<"Kembalian : Rp. "<<bayar-tot<<endl;	
			cout<<"======================================"<<endl;
			cout<<"Terima Kasih Telah Menggunakan Jasa Di Toko Kami"<<endl;
					
}
int keluar()
{
    keluar:
    cout<<"==========Terima Kasih Telah Berbelanja Di Toko Kami=========="<<endl;
    cout<<"=======Silahkan Datang Kembali Jika Anda Berkenan========"<<endl;
}
int main()
{
	string user,pass;
	cout<<"==============================="<<endl;
     cout<<" \tToko MURAH MERIAH"<<endl;
     cout<<" \tMuh. Fitratul Akbar"<<endl;
     cout<<"==============================="<<endl;
     cout<<endl;
     cout<<"===========MENU LOGIN=========="<<endl<<endl;
     cout<<"Masukkan UserName : "; 
	cin>>user;
     cout<<"Masukkan Password : "; 
	cin>>pass;
 
     if(user == "fitratul_akbar" && pass == "F1B019093")
	{
        cout<<"\n\nPassword dan Username Anda Cocok, Anda Berhasil  Masuk"<<endl;
        system("pause");
        system("cls");
        goto awal;
     }
     else{
        cout<<"Gagal Masuk, Password Atau Username Anda Salah";
        system("pause");
        exit(1);
     }
    awal :
    int pilihan, pilih; 
    cout<< "====================================="<<endl;
    cout<< "|    1.Input Barang dan pembayaran  |"<<endl;
    cout<< "|    2.jasa pengiriman              |"<<endl;
    cout<< "|    3.Keluar                       |"<<endl;
    cout<< "====================================="<<endl;
    cout<< "Masukkan pilihan  = "; 
    cin>>pilih; 
    switch (pilih)
    {
        case 1:
            system("cls");
            input();
            goto awal;
            break;
        case 2:
        	system("cls");
        	jasa();
        	goto awal;
            break;
        case 3:
        	system("cls");
  	        keluar:
  	        keluar();
    }
    return 0;
}

