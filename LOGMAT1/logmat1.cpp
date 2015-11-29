#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
void hexa(int x);
void biner(int x);
void oktal(int x);
void tanya();
void hitung();
void tambah();
void kurang();
void kali();

void main()
{
	char pil;
	cout << "\t\t-----------------------------------" << endl;
	cout << "\t\t-------Tugas Logika Informatika----" << endl;
	cout << "\t\t-----------------------------------" << endl;
	cout << "\t\t--------------Kelompok G-----------" << endl;
	cout << "\t\t-----------Sistem Bilangan---------" << endl;
	cout << "\t\t--------------------------------" << endl;
	cout << "\t\t-------------Nama | NPM------------" << endl;
	cout << "\t\t------ Stenly     | 535120063 -----" << endl;
	cout << "\t\t------ Michael    | 535120069 -----" << endl;
	cout << "\t\t------ Yudhistira | 535120080 -----" << endl;
	cout << "\t\t------ Haeqal     | 535120052 -----" << endl;

	cout <<"\n\t\tPilihan Menu: \n\t\t1. Konversi Sistem Bilangan\n\t\t2. Penjumlahan Bilangan\n\t\t3. Pengurangan Bilangan\n\t\t4. Perkalian Bilangan\n\t\tPilihan: ";
	cin>>pil;
	if(pil=='1')
		hitung();
	else if(pil=='2')
		tambah();
	else if(pil=='3')
		kurang();
	else if(pil=='4')
		kali();
	else
		cout<<"Input Salah.";
}

void to2_10(int& a)
{
 int i=0,j;
 float k,hasil;
 int bil[100];

 while(a>0)
 {
	bil[i]=a%10;
	a=a/10;
	i++;
 }
 a=0;
 for(j=0;j<i;j++)
 {
 k=j;
 hasil=bil[j]*(pow(2,k));
 a=a+hasil;
 }
}

void bilbiner()
{
 int a=1,b; 

 cout<<"\t\tBiner : ";
 cin>>a;

 if(a>0)
	{cout<<"\t\tDesimal: ";
	 to2_10(a);cout<<a; 
	 cout<<"\n\t\tOktal: ";
	 b=a;
	 oktal(b);
	 cout<<"\n\t\tHeksadesimal: ";
	 b=a;
	 hexa(b);
	}
 
}

void to8_10(int& a)
{
 int i=0,j;
 float k,hasil;
 int bil[100];

 while(a>0)
 {
	bil[i]=a%10;
	a=a/10;
	i++;
 }
 a=0;
 for(j=0;j<i;j++)
 {
 k=j;
 hasil=bil[j]*(pow(8,k));
 a=a+hasil;
 }
}

void biloktal()
{
 int a=1,b; 

 cout<<"\t\tOktal : ";
 cin>>a;

 if(a>0)
	{cout<<"\t\tDesimal: ";
	 to8_10(a);cout<<a; 
	 cout<<"\n\t\tBiner: ";
	 b=a;
	 biner(b);
	 cout<<"\n\t\tHeksadesimal: ";
	 b=a;
	 hexa(b);
	}
 
}

void tanyatambah()
{
		char ulang;
		nanya:
		cout <<"\n\t\tMemulai Option Lain? Y/N";
		ulang=getch();
		if(ulang=='y' || ulang=='Y')
		{
			tambah();
		}
		else if(ulang=='N' || ulang=='n')
		{
			cout << endl;
			cout <<"\t\tCredited By : Kelompok G";
			getch();
		}
		else
		{cout <<"\n\t\tInput Salah.\n";
		goto nanya;
		}
}

void tambah()
{
	int d, jmlh, i;
	int sum=0;
	char input;
	char akhir;
	balik:
	cout << "\n\n\t\t============Penjumlahan============" << endl;
	cout << "\t\t------------ DAFTAR INPUT ---------" << endl;
	cout << "\t\t--------- D: Desimal --------------" << endl;
	cout << "\t\t--------- B: Biner ----------------" << endl;
	cout << "\t\t--------- O: Oktal ----------------" << endl;
	cout << "\t\t===================================" << endl;
	cout << "\t\tMasukan mode input : ";
	cin >> input;
	if(input=='D' || input=='d')
	{
		cout <<"\t\tBanyak Bilangan Desimal: ";cin >> jmlh;
		int *bil=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Desimal Ke "<<i+1<<": ";
		cin >> bil[i];}
		
		for (i=0;i<jmlh;i++)
		{sum=sum+bil[i];}

		cout <<"\t\tJumlah Bilangan Desimal: "<<endl;
		cout <<"\t\t"<<bil[0];
		for (i=1;i<jmlh;i++)
		{cout <<"+"<<bil[i];}
		cout <<"="<<sum;

		tanyatambah();
	}
	else if(input=='B' || input=='b')
	{
		cout <<"\t\tBanyak Bilangan Biner: ";cin >> jmlh;
		int *bil=new int[jmlh];
		int *angka=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Biner Ke "<<i+1<<": ";
		cin >> bil[i];angka[i]=bil[i];}

		for (i=0;i<jmlh;i++)
		{to2_10(bil[i]);
		sum=sum+bil[i];}

		cout <<"\t\tJumlah Bilangan Biner: "<<endl;
		cout <<"\t\t"<<angka[0];
		for (i=1;i<jmlh;i++)
		{cout <<"+"<<angka[i];}
		cout <<"=";biner(sum);

		tanyatambah();
	}
	else if(input=='O' || input=='o')
	{
		cout <<"\t\tBanyak Bilangan Oktal: ";cin >> jmlh;
		int *bil=new int[jmlh];
		int *angka=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Oktal Ke "<<i+1<<": ";
		cin >> bil[i];angka[i]=bil[i];}

		for (i=0;i<jmlh;i++)
		{to8_10(bil[i]);
		sum=sum+bil[i];}

		cout <<"\t\tJumlah Bilangan Oktal: "<<endl;
		cout <<"\t\t"<<angka[0];
		for (i=1;i<jmlh;i++)
		{cout <<"+"<<angka[i];}
		cout <<"=";oktal(sum);

		tanyatambah();

	}
	else
	{
			cout <<"\t\tKode Yang Anda Input Salah!!" << endl;
			nanya:
			cout <<"\t\tAnda Ingin Mengulang Y/N?" ;
			akhir=getch();
			if(akhir=='Y' || akhir=='y')
			{
				goto balik;
			}
			else if(akhir=='N' || akhir=='n')
			{
				cout << endl;
				cout <<"\t\tCredited By : Kelompok G";
				getch();
			}
			else
				{cout <<"\n\t\tInput Salah.\n";
				goto nanya;
				}
	}
}

void tanyakurang()
{
		char ulang;
		nanya:
		cout <<"\n\t\tMemulai Option Lain? Y/N";
		ulang=getch();
		if(ulang=='y' || ulang=='Y')
		{
			kurang();
		}
		else if(ulang=='N' || ulang=='n')
		{
			cout << endl;
			cout <<"\t\tCredited By : Kelompok G";
			getch();
		}
		else
		{cout <<"\n\t\tInput Salah.\n";
		goto nanya;
		}
}

void kurang()
{
	int d, jmlh, i;
	int sum=0;
	char input;
	char akhir;
	balik:
	cout << "\n\n\t\t============Pengurangan============" << endl;
	cout << "\t\t------------ DAFTAR INPUT ---------" << endl;
	cout << "\t\t--------- D: Desimal --------------" << endl;
	cout << "\t\t--------- B: Biner ----------------" << endl;
	cout << "\t\t--------- O: Oktal ----------------" << endl;
	cout << "\t\t===================================" << endl;
	cout << "\t\tMasukan mode input : ";
	cin >> input;
	if(input=='D' || input=='d')
	{
		cout <<"\t\tBanyak Bilangan Desimal: ";cin >> jmlh;
		int *bil=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Desimal Ke "<<i+1<<": ";
		cin >> bil[i];}
		
		sum=bil[0];
		for (i=1;i<jmlh;i++)
		{sum=sum-bil[i];}

		cout <<"\t\tSelisih Bilangan Desimal: "<<endl;
		cout <<"\t\t"<<bil[0];
		for (i=1;i<jmlh;i++)
		{cout <<"-"<<bil[i];}
		cout <<"="<<sum;

		tanyakurang();
	}
	else if(input=='B' || input=='b')
	{
		cout <<"\t\tBanyak Bilangan Biner: ";cin >> jmlh;
		int *bil=new int[jmlh];
		int *angka=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Biner Ke "<<i+1<<": ";
		cin >> bil[i];angka[i]=bil[i];}

		to2_10(bil[0]);
		sum=bil[0];
		for (i=1;i<jmlh;i++)
		{to2_10(bil[i]);
		sum=sum-bil[i];}

		cout <<"\t\tSelisih Bilangan Biner: "<<endl;
		cout <<"\t\t"<<angka[0];
		for (i=1;i<jmlh;i++)
		{cout <<"-"<<angka[i];}
		cout <<"=";biner(sum);

		tanyakurang();
	}
	else if(input=='O' || input=='o')
	{
		cout <<"\t\tBanyak Bilangan Oktal: ";cin >> jmlh;
		int *bil=new int[jmlh];
		int *angka=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Oktal Ke "<<i+1<<": ";
		cin >> bil[i];angka[i]=bil[i];}

		to8_10(bil[0]);
		sum=bil[0];
		for (i=1;i<jmlh;i++)
		{to8_10(bil[i]);
		sum=sum-bil[i];}

		cout <<"\t\tSelisih Bilangan Oktal: "<<endl;
		cout <<"\t\t"<<angka[0];
		for (i=1;i<jmlh;i++)
		{cout <<"-"<<angka[i];}
		cout <<"=";oktal(sum);

		tanyakurang();

	}
	else
	{
			cout <<"\t\tKode Yang Anda Input Salah!!" << endl;
			nanya:
			cout <<"\t\tAnda Ingin Mengulang Y/N?" ;
			akhir=getch();
			if(akhir=='Y' || akhir=='y')
			{
				goto balik;
			}
			else if(akhir=='N' || akhir=='n')
			{
				cout << endl;
				cout <<"\t\tCredited By : Kelompok G";
				getch();
			}
			else
				{cout <<"\n\t\tInput Salah.\n";
				goto nanya;
				}
	}
}

void tanyakali()
{
		char ulang;
		nanya:
		cout <<"\n\t\tMemulai Option Lain? Y/N";
		ulang=getch();
		if(ulang=='y' || ulang=='Y')
		{
			kali();
		}
		else if(ulang=='N' || ulang=='n')
		{
			cout << endl;
			cout <<"\t\tCredited By : Kelompok G";
			getch();
		}
		else
		{cout <<"\n\t\tInput Salah.\n";
		goto nanya;
		}
}

void kali()
{
	int d, jmlh, i;
	int sum=1;
	char input;
	char akhir;
	balik:
	cout << "\n\n\t\t============Perkalian==============" << endl;
	cout << "\t\t------------ DAFTAR INPUT ---------" << endl;
	cout << "\t\t--------- D: Desimal --------------" << endl;
	cout << "\t\t--------- B: Biner ----------------" << endl;
	cout << "\t\t--------- O: Oktal ----------------" << endl;
	cout << "\t\t===================================" << endl;
	cout << "\t\tMasukan mode input : ";
	cin >> input;
	if(input=='D' || input=='d')
	{
		cout <<"\t\tBanyak Bilangan Desimal: ";cin >> jmlh;
		int *bil=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Desimal Ke "<<i+1<<": ";
		cin >> bil[i];}
		
		for (i=0;i<jmlh;i++)
		{sum=sum*bil[i];}

		cout <<"\t\tPerkalian Bilangan Desimal: "<<endl;
		cout <<"\t\t"<<bil[0];
		for (i=1;i<jmlh;i++)
		{cout <<"*"<<bil[i];}
		cout <<"="<<sum;

		tanyakali();
	}
	else if(input=='B' || input=='b')
	{
		cout <<"\t\tBanyak Bilangan Biner: ";cin >> jmlh;
		int *bil=new int[jmlh];
		int *angka=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Biner Ke "<<i+1<<": ";
		cin >> bil[i];angka[i]=bil[i];}

		for (i=0;i<jmlh;i++)
		{to2_10(bil[i]);
		sum=sum*bil[i];}

		cout <<"\t\tPerkalian Bilangan Biner: "<<endl;
		cout <<"\t\t"<<angka[0];
		for (i=1;i<jmlh;i++)
		{cout <<"*"<<angka[i];}
		cout <<"=";biner(sum);

		tanyakali();
	}
	else if(input=='O' || input=='o')
	{
		cout <<"\t\tBanyak Bilangan Oktal: ";cin >> jmlh;
		int *bil=new int[jmlh];
		int *angka=new int[jmlh];
		for (i=0;i<jmlh;i++)
		{cout <<"\t\tBilangan Oktal Ke "<<i+1<<": ";
		cin >> bil[i];angka[i]=bil[i];}

		for (i=0;i<jmlh;i++)
		{to8_10(bil[i]);
		sum=sum*bil[i];}

		cout <<"\t\tPerkalian Bilangan Oktal: "<<endl;
		cout <<"\t\t"<<angka[0];
		for (i=1;i<jmlh;i++)
		{cout <<"*"<<angka[i];}
		cout <<"=";oktal(sum);

		tanyakali();

	}
	else
	{
			cout <<"\t\tKode Yang Anda Input Salah!!" << endl;
			nanya:
			cout <<"\t\tAnda Ingin Mengulang Y/N?" ;
			akhir=getch();
			if(akhir=='Y' || akhir=='y')
			{
				goto balik;
			}
			else if(akhir=='N' || akhir=='n')
			{
				cout << endl;
				cout <<"\t\tCredited By : Kelompok G";
				getch();
			}
			else
				{cout <<"\n\t\tInput Salah.\n";
				goto nanya;
				}
	}
}

void hitung()
{
	int d;
	char input;
	char akhir;
	balik:
	cout << "\n\t\t======Konversi Sistem Bilangan=====" << endl;
	cout << "\t\t------------ DAFTAR INPUT ---------" << endl;
	cout << "\t\t--------- D: Desimal --------------" << endl;
	cout << "\t\t--------- B: Biner ----------------" << endl;
	cout << "\t\t--------- O: Oktal ----------------" << endl;
	cout << "\t\t===================================" << endl;
	cout << "\t\tMasukan mode input : ";
	cin >> input;
	if(input=='D' || input=='d')
	{
		cout <<"\t\tDesimal: ";
		cin >> d;
		cout<<"\t\tHeksadesimal: ";
		hexa(d);
		cout<<"\n\t\tBiner : ";
		biner(d);
		cout<<"\n\t\tOktal: ";
		oktal(d);
		cout << endl;
		tanya();
	}
	else if(input=='B' || input=='b')
	{
		bilbiner();
		cout << endl;
		tanya();
	}
	else if(input=='O' || input=='o')
	{
		biloktal();
		cout << endl;
		tanya();
	}
	else
	{
			cout <<"\t\tKode Yang Anda Input Salah!!" << endl;
			nanya:
			cout <<"\t\tAnda Ingin Mengulang Y/N?" ;
			akhir=getch();
			if(akhir=='Y' || akhir=='y')
			{
				goto balik;
			}
			else if(akhir=='N' || akhir=='n')
			{
				cout << endl;
				cout <<"\t\tCredited By : Kelompok G";
				getch();
			}
			else
				{cout <<"\n\t\tInput Salah.\n";
				goto nanya;
				}
	}
}
	
void tanya()
{
		char ulang;
		nanya:
		cout <<"\n\t\tMemulai Option Lain? Y/N";
		ulang=getch();
		if(ulang=='y' || ulang=='Y')
		{
			hitung();
		}
		else if(ulang=='N' || ulang=='n')
		{
			cout << endl;
			cout <<"\t\tCredited By : Kelompok G";
			getch();
		}
		else
		{cout <<"\n\t\tInput Salah.\n";
		goto nanya;
		}
}

void hexa(int x)
{
	int b[100];
	int j;
	int i;
	for(i=0;x>0;i++)
	{
		b[i]=x%16;
		x=x/16;
	}

	j=i-1;
	for(i=j;j>=0;j--)
	{
		if(b[j]<10)
		{
		cout << b[j];
		}
		else
		{
		switch(b[j])
		{
			case 10: cout << "A";
			break;
			case 11: cout << "B";
			break;
			case 12: cout << "C";
			break;
			case 13: cout << "D";
			break;
			case 14: cout << "E";
			break;
			case 15: cout << "F";
			break;
			cout << endl;
		}}}
}
void biner(int x)
{
	int b[100];
	int j,i;
	for(i=0;x>0;i++)
	{
		b[i]=x%2;
		x=x/2;
	}
	j=i-1;
	for(i=j;j>=0;j--)
	{
		cout << b[j];
	}
}
void oktal(int x)
{
	int b[100];
	int j,i;
	for(i=0;x>0;i++)
	{
		b[i]=x%8;
		x=x/8;
	}
	j=i-1;
	for(i=j;j>=0;j--)
	{
		cout << b[j];
	}
}