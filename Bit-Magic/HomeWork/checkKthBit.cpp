

#include <iostream>
#include <cmath>
using namespace std;

int checkKthBit(int n, int k){  // 0 base indexing
    int mask = 1<<(k-1);
    if(n&mask)
        return 1;
    else
        return 0;
}

int main(){
  
cout<<checkKthBit(11,2)<<endl;
return 0;
}