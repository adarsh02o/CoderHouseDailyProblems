/*
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
*/

// link : https://www.geeksforgeeks.org/problems/second-largest3735/1
 /* int getSecondLargest(vector<int> &arr) {
     int sL = -1;
     int largest = arr[0];
     
     for(int i = 0; i <arr.size(); i++){
         if(arr[i] > largest){
             sL = largest;
             largest = arr[i];
         }
         else if(arr[i]>sL && arr[i]< largest){
             sL = arr[i];
         }
     
     }     return sL;
    } 
    */