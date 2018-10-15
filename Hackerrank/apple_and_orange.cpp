#include<iostream>
using namespace std;
int main(){
	int s, t, a, b, m, n, sum1 = 0, sum2 = 0, count1 = 0, count2 = 0;
	cin >> s >> t >> a >> b >> m >> n;
	int apples[m];
	int oranges[n];
	for (int i = 0; i < m; i++){
		cin >> apples[i];
	}
	for (int i = 0; i < n; i++){
		cin >> oranges[i];
	}
	for(int i = 0; i < m; i++){
		sum1 = a + apples[i];
		if((sum1 >= s) && (sum1 <= t)){
			count1 += 1;
		}
	}
	for(int i = 0; i < n; i++){
		sum2 = b + oranges[i];
		if((sum2 >= s) && (sum2 <= t)){
			count2 += 1;
		}
	}
	cout << count1 << endl << count2 << endl;
	return 0;
}