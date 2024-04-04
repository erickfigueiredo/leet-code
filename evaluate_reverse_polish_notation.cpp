// Autor: Erick Figueiredo
// Problem link: https://leetcode.com/problems/evaluate-reverse-polish-notation/


class Solution {
public:
    long long int evalRPN(vector<string>& tokens) {
        stack<long long int>numbers;
        long long int n1, n2;
        char c;
        
        for(string s: tokens) {
            if((s.length() > 1 && isdigit(s[1])) || isdigit(s[0])) {
                numbers.push(stoi(s));
            } else {
                n2 = numbers.top();
                numbers.pop();
                n1 = numbers.top();
                numbers.pop();
                c = s[0];
                switch (c) {
                case '+':
                    n1 += n2;
                    break;
                case '-':
                    n1 -= n2;
                    break;
                case '*':
                    n1 *= n2;
                    break;
                case '/':
                    n1 /= n2;
                    break;
                }

                numbers.push(n1);
            }
        }
        
        return numbers.top();
    }
};