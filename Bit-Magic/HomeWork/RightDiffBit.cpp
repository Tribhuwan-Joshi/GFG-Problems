
/*Given two numbers m and n. Find the position of the rightmost different bit in the binary representation of numbers. It is guaranteed that such a bit exists. */

#include <iostream>
#include <cmath>
using namespace std;

int rightMostBit(int n , int m){
    int ans = n ^ m;
    return log2(ans & ~(ans-1)) + 1;
}


int main(){
  
  cout<<rightMostBit(11,9)<<endl;
  return 0;
}
