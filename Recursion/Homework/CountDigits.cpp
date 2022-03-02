#include <iostream>
using namespace std;

int countDigits(int n)
{
    if(n<10){
        return 1;
    }
    return 1 + countDigits(n / 10);
}

int main(){
    int n = 100;
    int res = countDigits(n);
    cout << res;
    return 0;
}