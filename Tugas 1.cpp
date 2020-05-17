#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<" \tMenu Login!!\n\n";
	cout<<" Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<" Masukkan Password  : ";cin>>pass;cout<<"\n";
			if (user == "fitratul_akbar" && pass == "f1b019093")
			{
				cout<<"Selamat Anda Berhasil Login\n";
			}
			else
			{
				cout<<"Ussername dan password anda salah silahkan coba kembali \n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
						
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
    cout<<"\t\t\t\t\t=======================\n";
    cout<<"\t\t\t\t\t\tCOVID-19\n";
    cout<<"\t\t\t\t\t=======================\n\n";
    cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Berapa lama waktu yang diperlukan sejak tertular atau terinfeksi sampai muncul gejala COVID-19??\n";
    string pilgan5[50]={"a. 3 minggu","b. 6 bulan","c. 1 tahun","d. 14 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"2. Di negara manakah angka kematian yang paling tertinggi akibat COVID-19??\n";
	string pilgan10[50]={"a. China","b. Indonesia","c. Italia","d. Arab Saudi"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;} 
    cout<<"\n";
    cout<<"3. Dalam merawat pasien COVID-19 apa saja yang dibutuhkan oleh tenaga medis, kecuali??\n";
	string pilgan6[50]={"a. handscoon","b. hazmat/gown","c.  masker","d. payung"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"4. Siapakah dokter pertama yang menemukan COVID-19??\n";
	string pilgan9[50]={"a. dokter Boyke","b. dokter Ai Fen","c. dokter Teguh Santoso","d. dokter Akmal Taherdokter Teguh Santoso"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"5. Berapakah jumlah orang yang terkena positif COVID-19 tertanggal 14 Mei 2020??\n";
	string pilgan8[50]={"a. 16006","b. 16010","c. 16005","d. 16009"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Apakah antibiotik efektif dalam mencegah dan mengobati COVID-19??\n";
    string pilgan2[50]={"a. Iya","b. belum ditemukan","c. bisa jadi","d. tidak"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"7. Berikut ini cara memutus rantai penularan COVID-19, kecuali??\n";
	string pilgan3[50]={"a. Social distancing","b. menggunakan masker","c. kerumunan liar","d. mencuci tangan dengan sabun"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"8. Apa saja gejala dari COVID-19??\n";
	string pilgan1[50]={"a. gatal-gatal ","b. flu,batuk dan sesak napas","c. diare","d. sakit kepala"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"9. Apa kepanjangan dari PSBB??\n";
	string pilgan4[50]={"a. Pendidikan Seni Budaya Bangsa","b. Partai Serikat Budaya Bangsa","c. Pembatasan Sosial Berskala Besar","d. Pembatasan Sosial Berbadan Besar"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"10. Apa nama pemeriksaan diagnostik untuk mengetahui sesorang terinfeksi COVID-19??\n";
	string pilgan7[50]={"a. swab","b. termometer","c. rapid tes","d. pemeriksaan tekanan darah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
    cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"==========================="<<endl;
			cout<<"TERIMA KASIH SUDAH MENJAWAB SOAL TENTANG COVID-19\n";
			cout<<"\t\tSEMOGA ANDA SUKSES\n";
			cout<<"==========================="<<endl;
	
}
