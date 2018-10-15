#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, diag_diff;
	cin >> n;
	int arr[n][n];
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++){
			cin >> arr[k][i];
		}
	}
	int left_right = 0, right_left = 0;
	for(int i = 0; i < n; i++){
			left_right += arr[i][i];
			right_left += arr[n-1-i][i];
	}
	diag_diff = left_right - right_left;
	if(diag_diff < 0){
		diag_diff = -diag_diff;
	}
	cout << diag_diff;
	return 0;
}

