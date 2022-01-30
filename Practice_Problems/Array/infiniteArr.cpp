/* Given an array “A” of N integers and you have also defined the new array “B” as a concatenation of array “A” for an infinite number of times.
For example, if the given array “A” is [1,2,3] then, infinite array “B” is [1,2,3,1,2,3,1,2,3,.......].
Now you are given Q queries, each query consists of two integers “L“ and “R”. Your task is to find the sum of the subarray from index “L” to “R” (both inclusive) in the infinite array “B” for each query.*/

#include <iostream>
#include <vector>
using namespace std;
int m = 1e9 + 7;

int func(int arr[] , int n , int x){
    int count = x / n;
    int rem = x % n;
    int sum = 0;
    int ans =  (count*arr[n-1])+ arr[rem];
    return ans;
}

int infinteSum(int arr[], int n, int L, int R)
{  
    int sumArr[n]={0};
    sumArr[0] = arr[0];

    for (int i = 1; i < n; i++){
        sumArr[i] = sumArr[i-1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<sumArr[i]<<" ";
    }
    cout << endl;
    int rSum = func(sumArr,n, R-1);
   
    int lSum = func(sumArr, n,L-1);
   
    return rSum - lSum+1;
}

int main(){

int arr[] = {1, 2,3};
int n = sizeof(arr)/sizeof(arr[0]);
 cout<<infinteSum(arr, n, 1, 12);
}