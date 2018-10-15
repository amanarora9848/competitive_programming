#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		/* code */
		string signal;
		cin >> signal;
		int l = signal.length();
		vector<int> x(l);
		vector<int> y(l);
		int countpx = 0, countpy = 0;
		for (int j = 0; j < signal.length(); j++)
		{
			/* code */
			if(signal[j] == 'R'){
				countpx += 1;
				x[j] += countpx;
			}
			if(signal[j] == 'L'){
				countpx -= 1;
				x[j] += countpx;
			}
			if(signal[j] == 'U'){
				countpy += 1;
				y[j] += countpy;
			}
			if(signal[j] == 'D'){
				countpy -= 1;
				y[j] += countpy;
			}
			if(signal[j] == '?'){
				countpx += 1;
				x[j] += countpx;
				countpy += 1;
				y[j] += countpy;
			}
		}
		int maxx = 0, maxy = 0, minx = 0, miny = 0;
		int p;
		for (p = 0; p < l; p++);
		{
			if (x[p] > maxx)
				maxx = x[p];
			else if(x[p] == 0)
				continue;
		}
		for (p = 0; p < l; p++);
		{
			if (y[p] > maxy)
				maxy = y[p];
			else if(y[p] == 0)
				continue;
		}
		for (p = 0; p < l; p++);
		{
			if (x[p] < minx)
				minx = x[p];
			else if(x[p] == 0)
				continue;
		}
		for (p = 0; p < l; p++);
		{
			if (x[p] < miny)
				miny = x[p];
			else if(y[p] == 0)
				continue;
		} 
		cout << minx << " " << miny << " " << maxx << " " << maxy << " " << endl;
	}
	/*RUL?R?D (Test Case)*/
	return 0;
}