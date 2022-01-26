#include <iostream>
using namespace std;

void Divisor(int n){
    int i;
    for ( i = 1; i*i<n; i++){
        if(n%i==0){
            cout << i << " ";
        }
        
    }
    

    for (; i >= 1; i--){
        // cout << "i is " << i << endl;
        if(n%i==0){
            cout << n / i << " ";
        }
    }
}
   
int main(){

    Divisor(100);
    return 0;
}