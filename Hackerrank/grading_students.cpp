#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i] >= 38){
			if((arr[i]+5) % 5 == 3){
				arr[i] += 2;
			}
			else if((arr[i]+5) % 5 == 4){
				arr[i] += 1;
			}
		}
		cout << arr[i] << endl;
	}

	return 0;
}