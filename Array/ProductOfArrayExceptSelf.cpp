#include <iostream>
#include <vector>
using namespace std;

// Optimized Approach : (with constant O(1) time complexity)

vector<int> productOfArrayExceptSelf(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, 1);

    // prefix -> ans
    for (int i = 1; i < n; i++){
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // Suffix 
    int suffix = 1;
    for (int i = n-2; i >= 0; i--){
       suffix *= nums[i+1];
       ans[i] *= suffix; 
    }

    return ans;
}

int main(){

    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productOfArrayExceptSelf(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}
