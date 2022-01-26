#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

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