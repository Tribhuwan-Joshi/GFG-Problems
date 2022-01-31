/*Given a number n, find length of the longest consecutive 1s in its binary representation.*/

#include <iostream>
using namespace std;

// int longestConsecutiveOne(int n){
//     int count = 0,maxC=0;
//     while(n){
//         if(n&1){
//             count++;
//             maxC = max(count, maxC);
//         }
        
//         else{
            
//             count = 0;
//         }
//         n >>= 1;
//     }
//     return maxC;
// }

int maxConsecutiveOne(int n){
    int count = 0;
    while(n){
        n = n & (n << 1);
        count++;
    }

    return count;
}


int main(){

    cout << maxConsecutiveOne(14);
    return 0;
}