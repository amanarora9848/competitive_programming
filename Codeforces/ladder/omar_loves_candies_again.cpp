#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		/* code */
		string candy;
		string most(26);
		int j, k;
		vector<int> count(26);
		cin >> candy;
		for(j = 97; j < 123; j++){
			for(k = 0; k < candy.length(); k++){
				if((int)candy[j+k] == j){
					count[j-97] += 1;
					(int)most[j-97] = j;
				}
			}
		}
		cout << max(count[0], count[25]) << candy[(max(((int)most[0]), ((int)most[25]))) + k] << endl;
	}
	return 0;
}