#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int data;
	// buka file
	ifstream file("data_input.txt");
	if(file){
		cout<<"File sukses dibuka!"<<endl;
		// baca data pertama di file
		file>>data;
		// tutup file
		file.close();
		// tampilkan hasil pembacaan
		cout<<"Data yang dibaca dari file:"<<data;
		return 0;
	}else{
		cout<<"File gagal dibuka!"<<endl;
		return 1;
	}
}
