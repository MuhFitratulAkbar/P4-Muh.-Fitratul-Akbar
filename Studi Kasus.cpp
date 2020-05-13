#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
void pembelian(){
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
	    cout<<"Total Pembayaran : Rp."<<tot<<endl;
	    cout<<"Dikon            : Rp."<<diskon<<endl; 
	    cout<<"Total Bayar      : Rp."<<tot-diskon<<endl;
	    cout<<"Jumlah Uang      : Rp.";
	    cin>>bayar; 
	    cout<<"Kembalian        : Rp."<<(bayar-(tot-diskon))<<endl;  
	    cout<<"==============================================\n";
}
void jasa()
{
	int total, bayar, diskon,kembali, berat[50], jarak[50], sub_tot[50],kg=5000;
	string nama[100];
    float tot;
    cout<<"Masukan Jumlah Barang yang ingin Di kirim : ";
	cin>>total; 
	for (int i=0; i<total;i++)
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
    cout<<endl;
	cout<<"Struk Pengiriman"<<endl;   
    cout<<"|============================================|"<<endl;
	cout<<"No   Barang     Berat       Jarak     Total"<<endl;
    for (int i=0;i<total;i++)
	{ cout<<i+1<<setw(8)<<nama[i]<<setw(10)<<berat[i]<<setw(12)<<jarak[i]<<setw(12)<<sub_tot[i]<<endl; 
	}
	cout<<"|============================================|"<<endl;
	if (tot>=200000)
	{
	    cout <<"mendapat diskon 93 %"<<endl;
	    diskon=0.93*tot;
    }
    cout<<"Total Pembayaran : Rp."<<tot<<endl;
	cout<<"Dikon            : Rp."<<diskon<<endl; 
	cout<<"Total Bayar      : Rp."<<tot-diskon<<endl;
	cout<<"Jumlah Uang      : Rp.";
	cin>>bayar; 
	cout<<"Kembalian        : Rp."<<(bayar-(tot-diskon))<<endl;  
	cout<<"================================================="<<endl;
	cout<<"Terima Kasih Telah Menggunakan Jasa Di Toko Kami"<<endl;
					
}
int main()
{
	int i,keluar;
    string pass_input, user_input;  
    string username ="fitratul_akbar";    
    string password = "F1B019093";    
    string login = "block";    
    i = 1;
    cout<<"==============================="<<endl;
    cout<<" \tToko MURAH MERIAH"<<endl;
    cout<<" \tMuh. Fitratul Akbar"<<endl;
    cout<<"==============================="<<endl;
    cout<<endl;    
   
   do {        
       cout << "Massukan Username = "; cin>>user_input;        
       cout << "Massukan Password = "; cin>>pass_input;        
       if (user_input == username && pass_input == password) {    
           cout<<endl;
		   cout << "| Login Berhasil |" << endl;            
           i = 4;
           login = "berhasil";        } 
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }
       }
 while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba lagi besok. Terima Kasih..\n\n";      
       goto awal;
	}   
 
 awal :
    int pilihan, pilih; 
    cout<< "====================================="<<endl;
    cout<< "|    1.Pembelian                    |"<<endl;
    cout<< "|    2.jasa pengiriman              |"<<endl;
    cout<< "|    3.Keluar                       |"<<endl;
    cout<< "====================================="<<endl;
    cout<< "Masukkan pilihan  = "; 
    cin>>pilih; 
    switch (pilih)
    {
        case 1:
            system("cls");
            pembelian();
            goto awal;
            break;
        case 2:
        	system("cls");
        	jasa();
        	goto awal;
            break;
        case 3:
        	system("cls");
         	cout<<"==========Terima Kasih Telah Berbelanja Di Toko Kami=========="<<endl;
            cout<<"=======Silahkan Datang Kembali Jika Anda Berkenan========"<<endl;
    }
    return 0;
}
