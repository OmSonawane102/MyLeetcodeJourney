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
    /*int n = 5;
    int arr[5] = {1,4,-5,6,-3};
    int maxSum = INT_MIN;

    for(int st = 0; st < 5; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum,maxSum);
        }
    }
    cout << "Max sum : " << maxSum << endl;
    
    
    This used brute force approach with O(n^2) second loop just adds new end to current value 
    max() is in second loop there checks every value and returning max ata last 
    */

    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};

    cout << maxSumOfSubArray(arr) << endl;
    
   
    return 0;
}
