#include<iostream>
#include<vector>
using namespace std;

int xor(int a, long int b){
	if(a = 1 && b = 1){
		return 1;
	}
	else if(a = 0 && b = 0);
	else{
		return 0;
	}
}
int main(){
	int N, Q, k, iter, i;
	long int x, y;
	cin >> N;
	int lastAnswer = 0;
	vector<vector<int> seq>seqList(N);
	for(int iter = 0; iter < Q; iter++){
		cin >> k >> x >> y;
		if(k = 1){
			i = xor(lastAnswer, x) % N;
			seq[i].push_back(y);
		}
		else if(k = 2){
			i = xor(lastAnswer, x) % N;
			lastAnswer = y % seq.size();
			cout << lastAnswer << endl;
		}
	}
	return 0;
}
