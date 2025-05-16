#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>

using namespace std;

main()
{
int jml;
long hrga, ppn,tth,ttb,up,uk,hadiah;
char kb,kt[3],np[20],nb[15],nt[15];

puts("                     		AGEN BUS PERJALANAN 	               ");
puts(" --------------------------------------------------------------- ");
printf(" Masukan Nama Penumpang                         : "); gets(np);
strupr(np);
cout<<" Masukan Kode Bus [R/S/H]                       : ";cin>>kb;


// MENAMPILKAN KODE BUS

switch(kb)
{
case 'R':
case 'r':
   	strcpy(nb,"Rosalinda");
   	break;
case 'S':
case 's':
	strcpy(nb,"Sinar Jaya");
      	break;
case 'H':
case 'h':
  	strcpy(nb,"Hiba Utama");
      	break;
default:
cout<<"Kode Anda salah"<<endl;
}
cout<<" Masukan Kode Tujuan [SBY/MLG/SLO/TGL/LMP/YGY]	: ";cin>>kt;

if(kt=="SBY")
{
strcpy(nt,"Surabaya");
hrga=300000;
}
else if(kt=="MLG")
{
strcpy(nt,"Malang");
hrga=400000;
}
else if(kt=="SLO")
{
strcpy(nt,"Solo");
hrga=200000;
}
else if(kt=="TGL")
{
strcpy(nt,"Tegal");
hrga=250000;
}else if(kt=="LMP")
{
strcpy(nt,"Lampung");
hrga=350000;
}
else
{
strcpy(nt,"Yogyakarta");
hrga=400000;
}
cout<<endl;
cout<<endl;
cout<<endl;


//PERINTAH OUTPUT

puts("                     	AGEN BUS PERJALANAN 		               ");
puts(" *************************************************************** ");
cout<<" Nama Bus                : "<<nb<<endl;
cout<<" Tujuan                  : "<<nt<<endl;
cout<<" Harga Tiket             : "<<hrga<<endl;
cout<<" Masukkan Jumlah Beli    : ";cin>>jml;
tth=hrga*jml;
cout<<" *************************************************************** "<<endl;


// PPN

cout<<" Total Harga             : "<<tth<<endl;
ppn=tth*0.05;

// HADIAH
if(hadiah=jml<=3)
{
cout<<" Hadiah                  : Anda tidak mendapatkan hadiah "<<endl;
}
else if(hadiah=jml>=3)
{
cout<<" Hadiah                  : Jam Tangan "<<endl;
cout<<" PPN                     : "<<ppn<<endl;
ttb=tth+ppn;
cout<<" Total Bayar             : "<<ttb<<endl;
cout<<" *************************************************************** "<<endl;


// UANG KEMBALIAN

cout<<" Masukan Pembayaran      : ";cin>>up;
uk=up-ttb;
cout<<" Uang Kembaliannya       : "<<uk<<endl;
}
puts(" *********************Terima Kasih****************************** ");
getch();
}
