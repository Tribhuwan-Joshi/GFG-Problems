// check no of set bit in the binary representation of a number

#include <iostream>
using namespace std;

int countSetBit(int n){    // theta (n)  time complexity
    int count = 0;
    while(n){
        
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

// theta (no of set bit)  time complexity

// whenever x -1 -> leftmost second bit becomes 1;

int BrianAlgo(int n){
    int count = 0;
    while(n){
        count++;
        n = n & (n-1);
    }
    return count;
}

// in constant time using lookup Table

int noOfSetBits(int n){
    int table[256];
    table[0] = 0;
    for (int i = 1; i < 256; i++){
        table[i] = (i & 1) + table[i / 2];
    }
    int res = 0;
    for (int i = 0; i < 4; i++){
        res = res + table[n & 0xff];
        n = n >> 8;
    }
    return res;
}

int main(){
  
cout<<countSetBit(100)<<endl;
cout<<BrianAlgo(100)<<endl;
cout << noOfSetBits(100) << endl;
return 0;
}