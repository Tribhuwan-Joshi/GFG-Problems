#include <iostream>
using namespace std;
#define m 1000000007


int main(){
    int a = 92233720368547758 % m;
    int b = 92233720368547758 % m;
    int c = ((a % m) * (b % m)) % m;   // (a+b) % m = (a % m) + (b % m) % m
    cout << c;

    return 0;
}