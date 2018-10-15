#include<iostream>
using namespace std;
int main(){
	int n, d, m, sum, count = 0;
	cin >> n;
	int s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	cin >> d >> m;
	for (int i = 0; i < n-m+1; i++){
		sum = 0;
		for (int j = 0; j < m; j++){
			sum += s[i+j];
		}
		if (sum == d){
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}w