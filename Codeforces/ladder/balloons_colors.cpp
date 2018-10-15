#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t, n, x, y;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		/* code */
		cin >> n >> x >> y;
		vector<int> N(n);
		for (int j = 0; j < n; j++)
		{
			/* code */
			cin >> N[j];
		}
		if((N[0] == x) && (N[n-1] == y)){
			cout << "BOTH" << endl;
		}	
		else if((N[0] == x) && (N[n-1] != y)){
			cout << "EASY" << endl;
		}	
		else if((N[0] != x) && (N[n-1] == y)){
			cout << "HARD" << endl;
		}	
		else{
			cout << "OKAY" << endl;
		}
	}
	return 0;
}