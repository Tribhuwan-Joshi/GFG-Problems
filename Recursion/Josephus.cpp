#include <iostream>
using namespace std;

int josephus(int n , int k){

    if(n==1){
        return 0;
    }

    return (n - 1, k );
    }

int main(){
    int n, k;
    cin >> n >> k;
    int alive = (josephus(n-1,k)+k)%n;  // for index begun with 1 add +1 to result
    cout << alive;
    return 0;

    
}