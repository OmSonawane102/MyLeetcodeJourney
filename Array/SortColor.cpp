#include <iostream>


void SortArr(int nums[], int n) {
        int countOfOne = 0, countOfZero = 0, countOfTwo = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) countOfZero++;
            if(nums[i] == 1) countOfOne++;
            if(nums[i] == 2) countOfTwo++;
        }
        int index = 0;
        for(int i = 0; i < countOfZero; i++) {
            nums[index] = 0;
            index++;
        }
        for(int i = 0; i < countOfOne; i++) {
            nums[index] = 1;
            index++;
        }
        for(int i = 0; i < countOfTwo; i++) {
            nums[index] = 2;
            index++;
        }
    return;
}

void PrintArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int  nums[6] = {2,0,2,1,1,0};
    int n = 6;
    SortArr(nums, n);
    PrintArray(nums, n);
    return 0;
}