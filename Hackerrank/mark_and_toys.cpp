#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n, k, sum = 0, count = 0;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(sum >= k){
			break;
		}
		else{
			count += 1;
		}
		sum = sum + arr[i];
	}
	cout << count-1 << endl;
	return 0;
}
