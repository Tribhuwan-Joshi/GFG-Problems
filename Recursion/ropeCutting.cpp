#include <iostream>
using namespace std;

int maxcut(int n, int a, int b, int c)
{

    if (n == 0)
        return 0;

    if (n < 0)
        return 1;

    int n1 = maxcut(n-a,a,b,c);
    int n2 = maxcut(n - b, a, b, c);
    int n3 = maxcut(n - c, a, b, c);

    int res = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    if (res == -1)
        return -1;

    return res+1;
}

int main(){
    cout << maxcut(9,2,2,2);

    return 0;
}

/*
def solve(n,a,b,c):
    if(n < 0):
        return -1;
    if(n == 0):
        return 0;
    res =  max(solve(n-a,a,b,c), solve(n-b,a,b,c), solve(n-c,a,b,c));
    if(res==-1):
        return -1
    return res+1;
    

print(solve(23,11,12,13))
*/
