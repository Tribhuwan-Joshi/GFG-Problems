// check if kth bit in binary representation is set or not

#include <iostream>
using namespace std;


void checkBit(int n, int k){
    int mask = 1 << k-1;
    int result = n & mask;   // n>>(k-1) &1 
    if(result){
        cout<<k<<" bit is set"<<endl;
    }
    else{
        cout<<k<<" bit is not set"<<endl;
    }
}


int main(){

checkBit(12, 1);

return 0;
}