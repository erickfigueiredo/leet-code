// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/reverse-string/


class Solution {
public:
    void reverseString(vector<char>& s) {
        char aux;
        int size = (s.size()-1)/2;
            
        for(int i = 0; i <= size; i++){
            aux = s[i];
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = aux;
        }
    }
};