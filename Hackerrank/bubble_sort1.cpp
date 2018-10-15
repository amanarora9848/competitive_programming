#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n, iter = 0;
	cin >> n;
	if(n < 2 || n > 600){
		exit(0);
	}
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				iter += 1;
			}
		}
	}
	cout << "Array is sorted in " << iter  << " swaps." << endl;
	cout << "First Element: " << arr[0] << endl;
	cout << "Last Element: " << arr[n-1] << endl;
	return 0;
}
