#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> inp;
   int n, i = 0;
   while(true){
      cin >> n;
      inp.push_back(n);
      if(n == 42){
         break;
      }
      i++;
   }
   for(int j = 1; j < inp.size(); j++){
      cout << inp[j-1] << endl;
   }
   return 0;
}
