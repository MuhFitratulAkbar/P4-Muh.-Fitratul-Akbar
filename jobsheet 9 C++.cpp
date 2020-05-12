#include <iostream>
using namespace std;
int main(){
cout<<"Nama : Muh. Fitratul Akbar\n";
cout<<"Nim : F1B019093\n";
cout<<"Kelompok: Kelompok 19\n\n";

int i;
char nama[30]={'M','u','h','.',' ','F','i','t','r','a','t','u','l',' ','A','k','b','a','r'};
char nama2[30]="Muh. Fitratul Akbar";
cout<<"Array per Karakter= ";
for(i=0;i<=29;i++)
{
cout<<nama[i];
}
cout<<endl; cout<<"Array string ="<<nama2<<endl<<endl;
return 0;
}

