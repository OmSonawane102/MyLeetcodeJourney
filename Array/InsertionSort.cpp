#include <iostream>

void InsertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) { // because we asume that arr[0] is sorted and unsorted array starts from index 1
        int current = arr[i], prev = i - 1;
        while(prev >= 0 && arr[prev] >= current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
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
    InsertionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}