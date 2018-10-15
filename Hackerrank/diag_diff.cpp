#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<vector<int>> a(n);
	for(int i = 0; i < n; i++){
		vector<int> temp;
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int k = 0; k < n; k++){
		for(int l = 0; l < n; l++){
			cout << a[k][l];
		}
		cout << endl;
	}
	return 0;
}

