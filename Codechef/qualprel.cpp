#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		long n, k;
		int count = 0;
		cin >> n >> k;
		int arr[n];
		for(int j = 0; j < n; j++){
			cin >> arr[j];
		}
		sort(arr, arr+n, greater<int>());
		for(int j = 0; j < n; j++){
			if(arr[j] >= arr[k-1]){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}