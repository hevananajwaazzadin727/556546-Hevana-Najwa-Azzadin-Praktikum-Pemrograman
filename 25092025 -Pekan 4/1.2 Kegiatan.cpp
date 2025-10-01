#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int data1, data2, data3, data4;
	// buka file
	ifstream file("data_input.txt");
	if(file){
		cout<<"File sukses dibuka!"<<endl;
		// baca data pertama di file
		file>>data1;
		file>>data2;
		file>>data3;
		file>>data4;
		// tutup file
		file.close();
		// tampilkan hasil pembacaan
		cout<<"Data yang dibaca dari file:"<<endl;
		cout<<"Data1: "<<data1<<endl;
		cout<<"Data2: "<<data2<<endl;
		cout<<"Data3: "<<data3<<endl;
		cout<<"Data4: "<<data4<<endl;
		return 0;
	}else{
		cout<<"File gagal dibuka!"<<endl;
		return 1;
	}
}
