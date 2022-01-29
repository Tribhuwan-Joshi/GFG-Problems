// print number which is occuring odd no of times

#include <iostream>
using namespace std;


// naive solution - O(n^2)
void oddOccurence(int arr[] , int n){
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count%2!=0)
            cout << arr[i];
    }
    cout << endl;
}


// O(n) solution
int oddOccurence2(int arr[] , int n){
    int res = 0;
    for (int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    return res;
}


// find missing number
int findMissingNo(int arr[],int n){
    int res = 0;
    for (int i = 0; i < n; i++){
        res = res ^ arr[i];

    }
    for (int i = 1; i < n+1; i++){
        res = res ^ i;
    }
    return res;
}

int main(){
  
int arr[5] = {1,2,3,5};
int n = sizeof(arr)/sizeof(arr[0]);
// cout<<"The number which is occuring odd no of times is: "<<oddOccurence2(arr,n)<<endl;
cout<<"The missing number is: "<<findMissingNo(arr,n)<<endl;

return 0;
}