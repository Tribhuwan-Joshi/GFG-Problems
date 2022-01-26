#include <iostream>
using namespace std;

int getPower(int n , int pow){

    if(pow==0)
        return 1;

    int temp = getPower(n, pow / 2);
   temp= temp * temp;
    if(pow%2==0){
        return temp;
    }
    else
        return temp * n;

    
    
}

int getPowerFast(int x , int n){
    int res = 1;
    while(n>0){
        if(n&1)
            res = res * x;
        
        x = x * x;
        n >>= 1;
    }
    cout << endl;
    return res;
}

int main(){
    cout << getPowerFast(5, 3);

    return 0;
}