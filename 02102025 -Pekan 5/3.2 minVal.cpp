#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) cin >> arr[i];
		int minVal = arr[0];
			for (int i = 1; i < n; i++) if (arr[i] < minVal) minVal = arr[i];
	cout << minVal << "\n";
		return 0;
}
