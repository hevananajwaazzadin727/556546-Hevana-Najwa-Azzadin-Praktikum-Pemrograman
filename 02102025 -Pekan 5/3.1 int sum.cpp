#include<iostream>
using namespace std;


	
	int sum (const int arr [], int n){
		int sum = 0;
		for (int i = 0; i < n; i++) sum += arr[i];
		return sum;
		}
	int main(){
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)	cin >> arr[i];						
	cout << sum (arr,n) << "\n";
		return 0;
}
