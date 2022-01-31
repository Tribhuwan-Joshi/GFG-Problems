// Rightmost different bit

#include <iostream>
#include <cmath>
using namespace std;
int firstSetBit(int n){
    return log2(n & -n) + 1;
    // int index = 1;
    // while(n){
    //     if(n&1){
    //         return index;
    //     }
    //     n = n>>1;
    //     index++;
    // }
    // return index;
}  
int main(){
cout<<firstSetBit(12)<<endl;  

return 0;
}