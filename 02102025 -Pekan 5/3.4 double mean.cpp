 #include<iostream>
using namespace std;

	int sum (const int arr [], int n){
		int sum = 0;
		for (int i = 0; i < n; i++) sum += arr[i];
		return sum;
		}
	double mean (const int arr [], int n) {
		return (double) sum (arr,n)/n;
	}
	int main(){
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)	cin >> arr[i];						
	cout << mean (arr,n) << "\n";
		return 0;
}
