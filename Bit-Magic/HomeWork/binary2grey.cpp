// Binary to Gray code

#include <bits/stdc++.h>
using namespace std;

int greyConverter(int n) { return n ^ (n >> 1); }

int main()
{
    int n = 3;
    cout << greyConverter(n) << endl;

    n = 9;
    cout << greyConverter(n) << endl;

    return 0;
}