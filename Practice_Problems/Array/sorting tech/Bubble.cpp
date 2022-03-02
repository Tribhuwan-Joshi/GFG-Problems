#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    int swap_counter = 1;
    
    for (int i = 0; i < n; i++){
        if(swap_counter==0)
            break;
        swap_counter = 0;
        for (int j = 0; j < n - i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swap_counter++;
        }
        
        }
    }
}

void printArr(int arr[] , int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
  
int arr[] = {2,3,5,4,1,6};
int n = 6;
bubbleSort(arr, n);
printArr(arr, n);

return 0;
}