/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 
*/

//https://leetcode.com/problems/reverse-string/description/

/*
    void reverseString(vector<char>& s) {
        vector<char>temp(s.size());
        for(int i =0; i<s.size(); i++){
            temp[i] = s[s.size()-1 - i];
        }
 for(int i =0; i<s.size(); i++){
    s[i] = temp[i];
 }
     

    }
*/