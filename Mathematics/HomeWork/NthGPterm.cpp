#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * x;

        x = x * x;
        n >>= 1;
    }
    cout << endl;
    return res;
}

int NthGPTerm(int a, int b , int n){

    int r = b / a;
    int ans = a * Power(r, n - 1);
    return ans;
}

int main(){

cout<<NthGPTerm(2,3,4);

return 0;
}