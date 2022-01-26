#include <iostream>
#include <vector>
using namespace std;

void seive(int n){
    vector<int> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    { // i*i = n;
        if(isPrime[i]){
            cout << i << " ";  
            for (int j = i * i; j <= n; j+=i){  // j=2*i
                isPrime[j] = false;
            }
        }
    }

    // for (int i = 2; i < n; i++ ){
    //     if(isPrime[i])
    //         cout << i << " ";
    // }
}

int main(){
    seive(41);

    return 0;
}