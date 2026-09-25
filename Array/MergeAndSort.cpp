#include <iostream>
#include <vector>
using namespace std;

void MergeAndSort(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(n <= 0) return;
    int index = m + n -1, i = m - 1, j = n - 1;
    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j]) {
             nums1[index--] = nums1[i--];
        } else {
            nums1[index--] = nums2[j--];
        }
    }
    while(j >= 0) {
         nums1[index--] = nums2[j--];
    }
    return;
}

void PrintArray(vector<int>& nums1) {
    int n = nums1.size();
    for(int i = 0; i < n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    MergeAndSort(nums1, m, nums2, n);
    PrintArray(nums1);
    return 0;
}