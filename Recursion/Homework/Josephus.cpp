#include <iostream>
using namespace std;

int jos(int n , int k){
    if (n==1){
        return 0;
    }
    return (n - 1, k);
}

int main(){

    int n = 6;
    int k = 2;
    int res = (jos(n - 1, k) + k) % n;
    cout << res;
    return 0;
}