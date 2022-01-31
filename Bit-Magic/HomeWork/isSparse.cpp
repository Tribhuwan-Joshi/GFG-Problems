/*A number is said to be a sparse number if in binary representation of the number no two or more consecutive bits are set. Write a function to check if a given number is Sparse or not.*/

#include <iostream>
using namespace std;

// use AND if its n>>1 , if its one then its not sparse

int isSparse(int n){
    int ans = (n & (n >> 1));
    if(ans)
        return 0;
    return 1;
}


int main(){

    cout << isSparse(72);

    return 0;
}