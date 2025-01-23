/*Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: true
Explanation: The given array is sorted.
Input: arr[] = [90, 80, 100, 70, 40, 30]
Output: false
Explanation: The given array is not sorted.
Constraints:
1 ≤ arr.size ≤ 106
- 109 ≤ arr[i] ≤ 109 

link : https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& arr) {
    // Traverse the array and check the condition
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // Not sorted
        }
    }
    return true; // Sorted
}

int main() {
    // Test cases
    vector<int> arr1 = {10, 20, 30, 40, 50};
    vector<int> arr2 = {90, 80, 100, 70, 40, 30};

    // Output results
    cout << (isSorted(arr1) ? "true" : "false") << endl; // Output: true
    cout << (isSorted(arr2) ? "true" : "false") << endl; // Output: false

    return 0;
}