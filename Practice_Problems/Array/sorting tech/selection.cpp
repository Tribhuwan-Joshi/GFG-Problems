#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[] , int n){
    for (int i = 0; i < n; i++){
     
      int min_index = i;
      for (int j = i; j < n; j++){
          if(arr[j]<arr[min_index]){
             
              min_index = j;
          }
         
      }
      swap(arr[i], arr[min_index]);
    }
}
int main(){
    int arr[] = {2, 3, 5, 4, 1, 55, 34, 6};
    int n = 8;
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}

