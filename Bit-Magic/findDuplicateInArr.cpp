#include <iostream>
using namespace std;
    
int main(){

    int arr[6] = {1, 2,3,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for (int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    for (int i = 1; i <= n-1; i++){
        res = res ^ i;
    }
    cout<<res<<endl;
    return 0;
}