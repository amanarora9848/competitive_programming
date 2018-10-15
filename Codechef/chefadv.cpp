#include<iostream>
using namespace std;
int main(){
   int t;
   long int n, m, x, y;
   cin >> t;
   for(int i = 0; i < t; i++){
      cin >> n >> m >> x >> y;
      int a = 1;
      int b = 1;
      int flag1 = true;
      int flag2 = true;
      while(a <= n){
         if((n-a == 1)){
            a += 1;
            break;
         }
         else if(a > n){
            flag1 = false;
         }
         else if(flag1){
            a += x;
         }
      }
      while(b <= m){
         if((m-b == 1)){
            b += 1;
            break;
         }
         else if(b > m){
            flag2 = false;
         }
         else if(flag2){
            b += y;     
         }
      }
      if((a == n) && (b == m)){
         cout << "Chefirnemo" << endl;
      }
      else{
         cout << "Pofik" << endl;
      }
   }
   return 0;
}
