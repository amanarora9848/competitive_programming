#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		long n;
		cin >> n;
		long long int a = 1, b = 2, c = 0, sum = 0;
		while(a < n){
			if(a % 2 == 0){
				sum += a;
			}
			c = a + b;
			a = b;
			b = c;
		}
		cout << sum << endl;
	}
	return 	0;
}