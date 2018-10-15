#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int no_f, t, k, l;
	vector<int> fingerLen(50);
	vector<int> gloveLen(50);
	vector<int> backLen(50);
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> no_f;
		for(int j = 0; j < no_f; j++){
			cin >> fingerLen[j];
		}
		for(int j = 0; j < no_f; j++){
			cin >> gloveLen[j];
		}
		for(k = 0, l = no_f; k < no_f, l > 0; k++, l--){
			backLen[k] = gloveLen[l];
		}
		for(int h = 0; h < no_f; h++){
			if(fingerLen[h] <= gloveLen[h]){
				if(fingerLen[h] > backLen[h])
				cout << "front" << endl;
				else if(fingerLen[h] < backLen[h])
					cout << "both" << endl;
				break;
			}
			else if(fingerLen[h] > gloveLen[h]){
				if(fingerLen[h] <= backLen[h])
					cout << "back" << endl;
				else if(fingerLen[h] > backLen[h])
					cout << "none" << endl;
				break;
			}
		}
	}
	return 0;
}