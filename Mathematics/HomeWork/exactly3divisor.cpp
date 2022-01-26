#include <iostream>
#include <vector>
using namespace std;
// find how many number till n have exactly 3 divisors

void exactly3divisor(int n){
    vector <int> isPrime(n+1,true);

    for (int i = 2; i * i < n;i++){
        if(isPrime[i]){
            for (int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i * i <= n; i++){
        if(isPrime[i])
            cout << i*i << " ";
    }
}

int main(){

    int n = 96;
    exactly3divisor(n);
    return 0;
}