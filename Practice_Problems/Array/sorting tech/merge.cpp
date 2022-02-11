#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int low , int mid , int high){
    int k = low;
    int i = low;
    int j = mid + 1;
    int b[high];
    while (i <= mid && j<=high){
        if(arr[i]<arr[j]){
            b[k++] = arr[i++];
        }
        else{
            b[k++] = arr[j++];
        }
    }

    if(i>mid){
        while(j<=high){
            b[k++] = arr[j++];
        }
    }
    else{
        while(i<=mid){
            b[k++] = arr[i++];
        }
    }

    //copy
    for (int i = low; i <= high;i++){
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int low , int high){
    if(low<high){
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
}
}
int main(){
    int arr[] = {2, 3, 5, 4, 1, 55, 34, 6};
    int n = 8;
    mergeSort(arr, 0,7);
    printArr(arr, n);

    return 0;
}