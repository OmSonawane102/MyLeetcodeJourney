/*
    Given are N boards of lenght each given in form of array, and M painters, such that each painter takes 1 unit of time to paint 1 unit of board

    Find the minimum time to paint all boards under the contraints that any painter will only paint in contiguous section of boards

    (it is a direct variation of book allocation problem)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int MaxOfArray(vector<int>& arr) {
    int ans = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        ans = max(ans, arr[i]);
    }
    return ans;
}

int SumOfArrayElements(vector<int> arr) {
    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans += arr[i];
    } 
    return ans;
}

bool IsValid(vector<int> arr, int n, int p, int maxAllowedTime) {
    int painters = 1, time = 0;

    for(int i = 0; i < n; i++) {

        if(time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }
    return painters > p ? false : true;
}

int MinimumTimeToPaintAllBoards(vector<int>& arr, int p) {
    int st = MaxOfArray(arr), end = SumOfArrayElements(arr); // range of possible values of minimum time (sorted array)

    int n = arr.size(), ans = -1;
    
    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(IsValid(arr, n, p, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int p = 2;
    cout << MinimumTimeToPaintAllBoards(arr, p) << endl;
    return 0;
}