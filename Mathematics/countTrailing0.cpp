// count trailing zero in the factorila of a number

#include <iostream>
using namespace std;

int countTrailingZero(int n){
    int res = 0;
    for (int i = 5; i <= n; i=i*5){
        res = res + n / i;

    }
    return res;
}


int main(){
    cout << countTrailingZero(100);
}