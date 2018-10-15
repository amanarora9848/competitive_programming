#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int array[n];
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	int i, key;
	for(int j = 1; j < n; j++){
		key = array[j];
		i = j - 1;
		while(i >= 0 && array[i] > key){
			array[i+1] = array[i];
			i = i - 1;
		}
		array[i+1] = key;
		for(int l = 0; l < n; l++){
			cout << array[l] << " ";
		}
		cout << endl;
	}
	return 0;
}
