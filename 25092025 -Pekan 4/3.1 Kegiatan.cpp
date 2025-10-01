#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int data;
	// buka file
	ifstream file("data_input.txt");
	if(file){
		cout<<"File sukses dibuka!"<<endl;
		// baca file dengan while
		int i = 0;
		while(i < 7 && file>>data){
			// tampilkan hasil pembacaan
			cout<<data<<endl;
		}
		// tutup file
		file.close();
		return 0;
	}else{
		cout<<"File gagal dibuka!"<<endl;
		return 1;
	}
}
