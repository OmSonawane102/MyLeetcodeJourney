#include<iostream>
#include<vector>
#include<climits>
using namespace std;


/*
    Kadance algorithm is the best approach for this problem since negative value of current sum will always contribute in decrease of sum we will reset the value to 0 and start again from next number
*/

int maxSumOfSubArray(vector<int>& nums){
    int currentSum = 0, maxSum = INT_MIN;
    for(int val : nums){
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){ 
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(){

    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};

    cout << maxSumOfSubArray(arr) << endl;
    
   
    return 0;
}
