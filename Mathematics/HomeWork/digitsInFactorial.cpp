#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int digitsInFac(int n){
    if (n<0) return 0;
    if (n==0) return 1;
    double digits = 0;
    for (int i = 2; i <= n; i++)
    {
        digits += log10(i);
    }

    return floor(digits) + 1;
}

int main(){

    cout << digitsInFac(120);
    return 0;
}