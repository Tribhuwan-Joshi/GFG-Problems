#include <iostream>
#include <cmath>
// #include <bits/stdc++.h>
using namespace std;


 // 0 to 2^n-1 PowerSet
 // Time Complexity: O(n*2^n)

void printPowerSet(string str,int n)
{
    /*set_size of power set of a set with set_size
    n is (2**n -1)*/
    int pow_set_size = pow(2, n);
    int counter, j;

    /*Run from counter 000..0 to 111..1*/
    for (counter = 0; counter < pow_set_size; counter++)
    {
        for (j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
            If set then print jth element from set */
            if (counter & (1 << j))
                cout << str[j];
        }
        cout << endl;
    }
}
int main(){
    string str = "abcdef";
    printPowerSet(str, str.length());
    return 0;
}

