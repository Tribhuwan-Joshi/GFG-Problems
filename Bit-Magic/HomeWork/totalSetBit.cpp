// check no of set bits

#include <iostream>
using namespace std;
    
int main(){

    int n = 7;
    int count = 0;
    while(n){
        n = n&(n-1);
        count++;
    }
    cout<<count<<endl;
    return 0;
    }
