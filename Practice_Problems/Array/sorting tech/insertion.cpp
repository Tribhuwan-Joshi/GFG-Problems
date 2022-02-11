#include <iostream>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[],int n){
    for (int i = 1; i < n;i++){
       int key = arr[i];
       int  j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
int main(){

    int arr[] = {2, 3, 5, 4, 1, 55,34,6};
    int n = 8;
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}