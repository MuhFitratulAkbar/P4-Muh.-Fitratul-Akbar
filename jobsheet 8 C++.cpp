#include <iostream>
using namespace std;
int main ()
{
cout<<"Nama : Muh. Fitratul Akbar\n";
cout<<"Nim : F1B019093\n";
cout<<"Kelompok: Kelompok 19\n\n";
int x[3],i;
cout<<"masukkan NIM terakhir Anda"<<endl;
for(i=0;i<=4;i++)
{
cout<<"Masukkan nim "<<i+1<<" : ";
cin>>x[i];
}
cout<<endl;
for(i=0;i<=4;i++)
{
cout<<"nim ke- "<<i+1<<" = "<<x[i]<<endl;
} cout<<endl;

return 0;
}

