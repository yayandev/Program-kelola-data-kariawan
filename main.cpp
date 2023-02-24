#include<iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

//variable
int opsi,jml;
int jmlKariawan = 0;
string edit,y;
string nama[1000];
string kariawanCari;
string jabatan[1000];
int gaji[1000];


int main()
{	

menu:
	cout << "==============================================="<<endl;
	cout << "=               Selamat Datang                ="<<endl;
	cout << "=       Di Program kelola data Kariawan       ="<<endl;
	cout << "=            By Yayan Faturrohman             ="<<endl;
	cout << "==============================================="<<endl;
	cout << "= No = Opsi                                   ="<<endl;
	cout << "==============================================="<<endl;
	cout << "=  1 = Input Data Kariawan                    ="<<endl;
	cout << "==============================================="<<endl;
	cout << "=  2 = Edit Data Kariawan                     ="<<endl;
	cout << "==============================================="<<endl;
	cout << "=  3 = Cari Data Kariawan                     ="<<endl;
	cout << "==============================================="<<endl;
	cout << "=  4 = Lihat Semua Data Kariawan              ="<<endl;
	cout << "==============================================="<<endl;
	cout << "=  5 = Keluar                                 ="<<endl;
	cout << "==============================================="<<endl;
	cout << "Masukan No opsi (1-5): ";
	cin >> opsi;
	
	if(opsi == 1)
	{
		cout << "Berapa jumlah data yang akan diinput: ";
		cin >> jml;
		for(int x = 0; x <jml; x++)
		{
			system("cls");
			cout << "Masukan nama kariawan: ";
			cin >> nama[jmlKariawan];
			cout << "Masukan Jabatan Kariawan: ";
			cin >> jabatan[jmlKariawan];
			cout << "Masukan Jumlah gaji kariawan: ";
			cin >> gaji[jmlKariawan];
			jmlKariawan = jmlKariawan + 1;
		}
		cout << "Berhasil menambahkan "<<jml<<" data kariawan!"<<endl;
		system("pause");
		system("cls");
		goto menu;
	}else if(opsi == 2){
		cout << "masukan nama kariawan: ";
		cin >> kariawanCari;
		for(int x = 0; x < jmlKariawan; x++)
		{
			if(kariawanCari == nama[x])
			{
				cout << "anda yakin akan merubah data "<<nama[x] <<" y/t: ";
				cin >> y;
				if(y == "y")
				{
					cout << "Masukan nama baru : ";
					cin >> nama[x];
					cout << "Masukan jabatan baru : ";
					cin >> jabatan[x];
					cout << "Masukan gaji baru : ";
					cin >> gaji[x];
					cout << "data berhasil di edit!";
					system("pause");
					system("cls");
					goto menu;
				}else{
					system("cls");
					goto menu;
				}
			}else{
				cout << "Kariawan dengan nama "<<kariawanCari<<" tidak ditemukan!"<<endl;
				system("pause");
				system("cls");
				goto menu;
			}
		}
	}else if(opsi == 3){
		cout << "Masukan nama kariawan yang akan dicari : ";
		cin >> kariawanCari;
		for(int x = 0; x < jmlKariawan; x++)
		{
			if(kariawanCari == nama[x])
			{
				cout << "Data kariawan yang anda cari"<<endl;
				cout << "Nama    : "<<nama[x]<<endl;
				cout << "Jabatan : "<<jabatan[x]<<endl;
				cout << "Gaji    : Rp."<<gaji[x]<<endl;
				system("pause");
				system("cls");
				goto menu;	
			}
		}
		
		cout << "Tidak ada kariawan dengan nama "<<kariawanCari<<endl;
		system("pause");
		system("cls");
		goto menu;
	}else if(opsi == 4){
		system("cls");
		if(jmlKariawan == 0)
		{
			cout << "Tidak ada data!"<<endl;
		}else{
		cout << "Daftar data kariawan"<<endl;
		cout<<"===============================================================================\n";
		cout<<"|  No  |           Nama           |      Jabatan        |           Gaji      |\n";
		cout<<"===============================================================================\n";
		for(int i=0;i<jmlKariawan;i++){
		cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
		cout<<" "<<setiosflags(ios::left)<<setw(25)<<nama[i]<<"|";
		cout<<" "<<setiosflags(ios::left)<<setw(20)<<jabatan[i]<<"|";
		cout<<" "<<setiosflags(ios::left)<<setw(20)<<gaji[i]<<"|";
		cout<<"\n===============================================================================\n";
		}
		}
		system("pause");
		system("cls");
		goto menu;
	}else if(opsi == 5)
	{
		system("exit");
	}else{
		cout << "Masukan no opsi yang valid! (1-5)"<<endl;
		system("pause");
		system("cls");
		goto menu;
	}
	
	
	return 0;
}
