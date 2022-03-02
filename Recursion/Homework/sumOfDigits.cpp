#include <iostream>
using namespace std;

int addDigits(int n){
    if(n<=9){
        return n;
    }
    return n % 10 + addDigits(n / 10);
}

int main(){
    int n = 344;
    int res = addDigits(n);
    cout << res;

    return 0;
}