/*
    Assign C cows to N stall that min distance between them is largest possible.
    return largest minimum distance

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPossible(vector<int>&arr, int minAllowedDistance, int n, int c){
    int cows = 1, lastStallPos = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] - lastStallPos >= minAllowedDistance) {
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == c){
            return true;
        }
    }
    return false;
}

int LargestMinimumDistance(vector<int>& arr, int c, int n) {
    sort(arr.begin(), arr.end());
    int distance = -1;
    int st = 1, end = arr[n - 1] - arr[0]; // range of array 

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(IsPossible(arr, mid, n, c)) { // search in right 
            distance = mid;
            st = mid + 1;
        } else { // search left
            end = mid - 1;
        }
    }
    return distance;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int c = 3, n = arr.size();
    cout << LargestMinimumDistance(arr, c, n);
    return 0;
}