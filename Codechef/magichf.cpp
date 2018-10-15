#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   int t, n, x, s, s1, s2, j;
   cin >> t; 
   for(int i = 0; i < t; i++){
      cin >> n >> x >> s;
      vector<int> N(n);
      for(int l = 0; l < n; l++){
         N[l] = 0;
      }
      N[x-1] = x;
      for(j = 0; j < s; j++){
         cin >> s1 >> s2;
         swap(N[s1-1], N[s2-1]);
      }
      for(int k = 0; k < n; k++){
         if(N[k] == x){
            cout << k+1 << endl;
            break;
         }
      }
   }
   return 0;
}
