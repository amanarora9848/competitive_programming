#include<iostream>
#include<vector>
using namespace std;
int main()
{
	/* code */
	int t, n, k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		/* code */
		cin >> n >> k;
		vector<int> N(n);
		for (int k = 0; k < n; k++)
		{
			/* code */
			cin >> N[k];
		}
		vector<int> ans(n);
		int count = 0;
		for(int j = 0; j < n; j++){
			ans[j] = (N[j])/k;
			count += ans[j];
		}
		cout << count << endl;
	}
	return 0;
}