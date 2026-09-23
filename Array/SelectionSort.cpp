#include <iostream>

void SelectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int smallestIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        std::swap(arr[i], arr[smallestIndex]);
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
    SelectionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}