// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/valid_palindrome/


class Solution {
public:
    bool isPalindrome(string s) {        
        string clear, rever;
        char aux;
        for(char c: s) {
            aux = tolower(c);
            
            if(isalnum(aux)) clear += aux;
        }
        
        rever = clear;
        reverse(rever.begin(), rever.end());
        
        return rever == clear;
    }
};