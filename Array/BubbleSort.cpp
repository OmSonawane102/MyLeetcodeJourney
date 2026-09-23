#include <iostream>

void BubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] >  arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(isSwap == false) {
            return; // Array already sorted
        }
    }
}

void PrintArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[5] = {4, 1, 2, 5, 3};
    int n = 5;
    BubbleSort(arr, n);
    PrintArray(arr, n);
    return 0;
}