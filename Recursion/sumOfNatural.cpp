#include <iostream>
using namespace std;

int sumOfnatural(int n){
    if(n==1)
        return 1;

    return n + sumOfnatural(n - 1);
}

int main(){

    cout << sumOfnatural(2);
    return 0;
}