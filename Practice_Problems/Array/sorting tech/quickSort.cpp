#include <iostream>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int arr[], int low , int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[] , int low , int high){
    if(low<high){
    int pivot = partition(arr,  low ,  high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1,high);
    
    }
}
int main(){
    int arr[] = {2, 3, 5, 4, 1, 55, 34, 6};
    int n = 8;
    quickSort(arr, 0, 7);
    printArr(arr, n);

    return 0;
}