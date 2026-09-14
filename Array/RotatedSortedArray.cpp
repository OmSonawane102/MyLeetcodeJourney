#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int> nums, int target) {

    int st = 0, end = nums.size() - 1;

    while(st <= end) {
        int mid = st + (end -st)/2;

        if(nums[mid] == target)
            return mid;

        if(nums[st] <=nums[mid]) {      // left sorted
            if(nums[st] <= target && target < nums[mid]) {
                end = mid - 1;
            } else {
                st =  mid + 1;
            }
        } else {    // right sorted
            if(nums[mid] < target && target <= nums[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            } 
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    cout << Search(nums, 0) << endl;
    return 0;
}