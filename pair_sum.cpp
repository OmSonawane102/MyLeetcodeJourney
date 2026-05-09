#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSumOfTarget(vector<int>& nums,int target){

    // Two pointer Approach :
    int st = 0, end = nums.size()-1;
    vector<int> ans;
    while (st < end){
        int pairSum = nums[st] + nums[end];
        if(pairSum< target){
            st++;
        }
        else if(pairSum > target){
            end--;
        }
        else{
            ans.push_back(st);
            ans.push_back(end);
            return ans;
            break;
        }
    }
    return ans;

}
int main(){
    vector<int> nums = {1,2,3,6,9};
    int target = 5;
    
    vector<int> ans = pairSumOfTarget(nums, target);
    // Brute Force Approach
    /*bool shouldBreak = false;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                shouldBreak = true;
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                break;

            }
        }
        if(shouldBreak == true){
            break;
        }
    }

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;*/


    

    cout << ans[0] << " " << ans[1] << endl;
    

    return 0;
}
