#include <iostream>
#include <vector>

int BinarySearch(std::vector<int>& arr, int target){

    int st = 0, end = arr.size() - 1, mid;

    while(st <= end){
        mid = st + (end - st)/2;
        if(target < arr[mid]){
            end = mid - 1;
        } else if (target > arr[mid]){
            st = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {

    std::vector<int> arr = {0, 1, 5, 10, 23, 47, 61};
    std::cout << BinarySearch(arr, 5) << std::endl;
    
    return 0;
}