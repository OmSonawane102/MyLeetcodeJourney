#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NextPermutation(vector<int>& nums) {
    int pivot = -1, n = nums.size();

    // find pivot : 
    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]){
            pivot = i;
            break;
        } 
    }

    // when we have greatest possible arrangement, reverse the array
    if(pivot == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // find next permutation : 
    for(int i = n - 1; i > pivot; i--) {
        if(nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // reverse element from (pivot + 1) to (n - 1) :
    reverse(nums.begin() + pivot + 1, nums.end());
    return;
}

void PrintArray(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3};
    NextPermutation(nums);
    PrintArray(nums);
    return 0;
}