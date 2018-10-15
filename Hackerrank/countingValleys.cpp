#include<iostream>
#include<string>
using namespace std;
int main(){
    int v = 0, sum = 0, steps;
    string valley;
    cin >> steps;
    cin >> valley;
    for(int i = 0; i < steps; i++){
        if(valley[i] == 'D'){
            v -= 1;
        }
        if(valley[i] == 'U'){
            v += 1;
        }
        if((v == 0)&&(valley[i] == 'U')){
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}