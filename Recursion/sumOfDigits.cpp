#include <iostream>
using namespace std;
int sumOfDigits(int n){
    if(n==0)
        return 0;
    else
        return n % 10 + sumOfDigits(n / 10);
}

int main(){

    cout << sumOfDigits(9987);
    return 0;
}