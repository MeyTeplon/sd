#include <iostream>
using namespace std;

string nama, nim,kelas,prodi, alamat,ttl,no;
void mahasiswa()
{
	cout<<"\nMasukan Nama Mahasiswa \t\t: "
	cin>>nama;
	cout<<"Masukan NIM Mahasiswa \t\t: ";
	cin>>nim;
	cout<<"Masukan Kelas Mahasiswa \t: ";
	cin>>kelas;
	cout<<"Masukan Prodi Mahasiswa \t: ";
	cin>>prodi;
	cout<<"Masukan Alamat Mahasiswa \t: ";
	cin>>alamat;
	cout<<"Masukan Tepat,tanggal lahir \t: ";
	cin>>ttl;
	
	cout<<"\n\nData Atas nama "<<nama<<" Dengan NIM "<<nim<<" Prodi "<<prodi<<" kelas "<<kelas<<" yang beralamat di "<<alamat<<" lahir pada "<<ttl<<" Barhasil disimpan pada data Universitas AMIKOM Yogyakarta. Terima Kasih"<<endl;
}
int main()
{
	data:
	cout<<"SELAMAT DATANG DI SISTEM INPUT DATA MAHASISWA AMIKOM YK\n";
	cout<<"==========================\n";
	
	int jml;
	cout<<"\nBerapa Mahasiswa yang ingin di Inputkan \t: ";
	cin>>jml;
	
	for(int i=0;i<jml;i++){
		mahasiswa();
	}
	cin.ignore();
	cout<<"\nTekan Enter untuk kembali menginputkan. ";
	cin.get();
	system("cls");
	goto data;
}

	
	
