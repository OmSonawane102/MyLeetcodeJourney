/*
Book Allocation Problem : Split Array Largest Sum on leetcode
    there are N number of arr, each ith book has A[i] numbr of pages.

    You have to allocate book to m number of student so that maximum number of pages allocated to a student is minimum.
    > Each book should be allocated to a student.
    > Each student has to allocate atleast one book.
    > Allotment should be in contiguos order.

    Calculate and return that minimum possible number.
    Return -1 if valid assignment not possible
*/


#include <iostream>
#include <vector>
using namespace std;

bool IsValid(vector<int>& arr, int m, int n, int maxAllowedPages) {
    int stud = 1, pages = 0;
    for(int i = 0; i < n; i++) {

        if(arr[i] > maxAllowedPages) {
            return false;
        }

        if((pages + arr[i]) <= maxAllowedPages) {
            pages += arr[i];
        } else {
            stud++;
            pages = arr[i];
        }
    }
    return stud > m ? false : true;
}

int SumOfArrayElements(vector<int>& arr) {
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

int MinimumNumberOfMaximumPages(vector<int>& arr, int m) {

    int ans = -1, n = arr.size();
    int st = 0, end = SumOfArrayElements(arr); // range of possible answers

    if(n < m)
        return -1;
    while(st <= end) {

        int mid = st + (end - st) / 2;

        if(IsValid(arr, m, n, mid)) {  // valid case : if the answer is valid store it then look for smaller one
            ans = mid;
            end = mid - 1;
        } else {    // Invalid case : if the ans is not valid then it must be greater than it is now
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int students = 2;
    cout << MinimumNumberOfMaximumPages(arr, students) << endl;
    return 0;
}