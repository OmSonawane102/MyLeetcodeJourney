#include<iostream>
#include<vector>
using namespace std;


// here i used nested loops but its not efficient as bit operation : 

/*void singleNumber(vector<int>& nums){
    int x;
   for (int i = 0; i < nums.size(); i++){
        bool isDuplicate = false;
        for (int j = 0; j < nums.size(); j++){
            if (i != j && nums[i] == nums[j]){
                isDuplicate = true;
                break;
            }
            
        }
        if(isDuplicate == false){
            cout << nums[i] << " ";

        }
        
   }
    
    
}*/


/*BITWISE XOR "^" is used for linear time complexity in single_number problem:
    if two same numbers are apearing in a vector we are trying to cancel out both and the remaining unique number will be our ans ---> lets take 2 as example :
    e will use XOR operator if two appear more than once in a code then it will perform the following operation(binary of 2 is 10);

                    |  10 |
                    |^ 10 |     ------->> it will work similarly with every number
                   ---------    
                    |  00 |

    same number will always give zero for BITWISE XOR 
    ___________
    | n^n = 0 |
    | n^0 = n |
    |_________|

    since it is explicitly mentioned that every number appears twise therefore this algorithm works otherwise it won't
*/


int single_number(vector<int>& nums){
    int xorResult = 0;
    for(int val : nums){
        xorResult ^= val;
    }
    return xorResult;
}

int main(){

    vector<int> nums = {4,2,5,5,7,4,7};
    cout << single_number(nums) << endl;

}
