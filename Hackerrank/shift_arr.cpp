#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, d, temp = 0;
	cin >> n >> d;
	vector<int> arr(n);
	for(int i = 0; i <n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < d; j++){
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[d] = temp;
		}
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
