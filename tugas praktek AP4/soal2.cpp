#include <iostream>

using namespace std;

int main(){
	
	//Deklarasi variabel
	float tes, uts, uas, tugas, nilai_akhir;
	char nilai_huruf;
	
	cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
	cout<<"----------------------------------------"<<endl;
	
	//Proses input
	cout<<"Masukan Nilai Tes : ";
	cin>>tes;
	
	cout<<"Masukan Nilai UTS : ";
	cin>>uts;
	
	cout<<"Masukan Nilai UAS : ";
	cin>>uas;
	
	cout<<"Masukan Nilai Tugas : ";
	cin>>tugas;
	
	//Hitung sesuai rumus
	nilai_akhir = ((tes*0.2)+(uts*0.3)+(uas*0.3)+(tugas*0.2));
	
	if (nilai_akhir>=80){
		nilai_huruf='A';
	}else if (nilai_akhir>=70){
		nilai_huruf='B';
	}else if(nilai_akhir>=60){
		nilai_huruf='C';
	}else if (nilai_akhir>=50){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	
	//Proses output
	cout<<endl;
	cout<<"Nilai Akhir : "<<nilai_akhir<<endl;
	cout<<"Nilai Huruf : "<<nilai_huruf<<endl;
	
	
}