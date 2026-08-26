#include<iostream>
#include<vector>
using namespace std;

//optimized Approach (Two pointer approach) :

int containerWithMostWater(vector<int>& height){
    int lp = 0, rp = height.size() - 1;
    int maxWater = 0;
    while(lp < rp){
        int width = rp - lp;
        int minHeight = min(height[lp], height[rp]);
        maxWater = max(maxWater, (width*minHeight));
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << containerWithMostWater(height) << endl;
    return 0;
}
