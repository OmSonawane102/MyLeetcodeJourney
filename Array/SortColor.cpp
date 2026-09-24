#include <iostream>

// Most Optimal Approach : Dutch National Flag Algorithm. T = O(n) with single pass, S = O(1)
void SortArr(int nums[], int n) {
    int mid = 0, low = 0, high = n - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            std::swap(nums[low], nums[mid]);
            mid++;
            low++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            std::swap(nums[mid], nums[high]);
            high--;
        }
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