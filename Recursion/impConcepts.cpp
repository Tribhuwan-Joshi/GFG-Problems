#include <iostream>
using namespace std;

void  printNto1(int n){    // Tail recursion is faster than head recursion
start:
    if(n==0)
        return;
    else{
        cout << n ;
        n--;
        goto start;   // Tail call elimination 
    }
}  


void print1ton(int n){   // Head recursion parent has to do something after
    if(n==0)
        return;
    else
        print1ton(n - 1);
    cout << n << " ";
}

int fact(int n){
    if(n==0||n==1)
        return 1;
    return n * fact(n - 1);
}

int nthFib(int n){
    if(n==0||n==1)
        return n;
    return nthFib(n - 2) + nthFib(n - 1);
}

int facTailRecursive(int n,int k){
    if(n==0||n==1){
        return k;
    }
    return facTailRecursive(n-1 , k*n);
}


int main(){
    cout << nthFib(4);
    // cout << facTailRecursive(5, 1);
    // printNto1(5);
    // cout << endl;
    // print1ton(5);
    return 0;
}