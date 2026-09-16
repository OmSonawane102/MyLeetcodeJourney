#include <iostream> 
#include <vector>
using namespace std;

int SingleElement(vector<int>& nums) {
    int st = 0, end = nums.size() - 1;
    if(nums.size() == 1) return nums[0];
    while(st <= end) {
        int mid = st + (end - st)/2;

        if(mid == 0 && nums[0] != nums[1]) return nums[mid];
        if(mid == end && nums[end] != nums[end - 1]) return nums[mid];
        
        if(mid % 2 == 0) {
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            } else if(nums[mid] == nums[mid - 1]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return mid;
            } else if(nums[mid] == nums[mid - 1]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout << SingleElement(nums) << endl;
    return 0;
}