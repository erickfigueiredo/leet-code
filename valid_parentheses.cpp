// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/valid-parentheses/


class Solution {
public:
    bool isValid(string s) {
        stack<char> closeBrackets;
        
        for(char c : s){
            if(c == '(' or c == '[' or c == '{'){
                closeBrackets.push(c);
            } else if(c == ')' and !closeBrackets.empty()){
                if(closeBrackets.top() != '(')
                    return false;
                
                closeBrackets.pop();
            } else if(c==']' and !closeBrackets.empty()){
                if(closeBrackets.top() != '[')
                    return false;
                
                closeBrackets.pop();
            }else if (!closeBrackets.empty()){
                if(closeBrackets.top() != '{')
                    return false;
                
                closeBrackets.pop();
            }else{
                return false;
            }
        }
        
        return closeBrackets.empty();
    }
};