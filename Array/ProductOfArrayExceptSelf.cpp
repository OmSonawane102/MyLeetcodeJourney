#include<iostream>
#include<vector>
using namespace std;

vector<int> productOfArrayExceptSelf(vector<int>& nums){
    int product = 1;
    vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size(); j++){
            if(j == i){
                continue;
            }
            product *= nums[j];
        }
        result.push_back(product);
        product = 1;
    }
    return result;
}

int main(){

    vector<int> nums = {1,2,3,4};
    vector<int> result = productOfArrayExceptSelf(nums);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}
