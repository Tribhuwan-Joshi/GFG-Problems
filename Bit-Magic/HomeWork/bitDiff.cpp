//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

#include <iostream>
using namespace std;

int bitDiff(int n , int m){
    int Xor = n ^ m;
    int count;
    while(Xor){
        Xor = Xor & (Xor - 1);
        count++;
    }
    return count;
}

int main(){
    cout << bitDiff(20, 25);
    return 0;
}