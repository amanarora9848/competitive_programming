#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int count1 = 0, count2 = 0, temp1, temp2, n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	temp1 = arr[0];
	temp2 = arr[0];
	for(int i = 1; i < n; i++){
		if((arr[i] > arr[i - 1]) && (arr[i] > temp1)){
			count1 += 1;
			temp1 = arr[i];		
		}
	}
	for(int i = 1; i < n; i++){
		if((arr[i] < arr[i-1]) && (arr[i] < temp2)){
			count2 += 1;
			temp2 = arr[i];
		}
	}
	cout << count1 << " " << count2;
	return 0;
}

