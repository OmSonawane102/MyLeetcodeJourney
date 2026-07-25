#include<iostream>
#include<vector>
//#include<algorithm> //includes sort
using namespace std;


// Moore's voting algorithm : 
int majorityElement(vector<int>& nums){
    int freq = 0, ans = 0;

    for(int i = 0; i < nums.size(); i++){
        if (freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
        
    }
    return ans;
}

/*
int mElementSorting(vector<int>& nums){
    //sorting
    sort(nums.begin(), nums.end());

    // freq count
    int freq = 1, ans = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > nums.size()/2){
            return ans;
        }
    }
    return 0;

}*/

/*
int mElemBruteForce(vector<int>& nums){
    // Bruteforce approach :
    for(int val : nums){
        int occurence = 0;
        for(int elements : nums){
            if(elements == val){
                occurence++;
            }
        }
        if(occurence >= nums.size()/2){
            return val;
            break;
        }

    }
}
*/

int main(){
    vector<int> nums = {1, 2, 2, 1, 1, 1};
    
    
    //cout << mElemBruteForce(nums) << endl;
    //cout << mElementSorting(nums) << endl;
    cout << majorityElement(nums) << endl;

    
    return 0;
}
