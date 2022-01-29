// find 2 odd ocuuring elements in the array
// This question is one of my favourite question
#include <iostream>
using namespace std;

void find2OddOccuring(int arr[] , int n){

    int Xor = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++){
        Xor = Xor ^ arr[i];
    }
    int setBit = Xor & ~ (Xor-1);

    for (int i = 0; i < n; i++){
        if((arr[i] & setBit) == 0){
            res1 = res1 ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
    }
    cout << res1 << " " << res2 << endl;
}

int main(){

int arr[] = {3,1,3,2,2,4,4,4};
int n = sizeof(arr)/sizeof(arr[0]);
find2OddOccuring(arr,n);

return 0;
} 