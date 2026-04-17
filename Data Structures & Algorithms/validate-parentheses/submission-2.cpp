#include<stack>
class Solution {
public:
 bool isValid(string s) {
    stack<char> validator;
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            validator.push(ch);
        } else {
            // Check if stack is empty before accessing top
            if (validator.empty()) return false;

            // Match closing with corresponding opening
            char top = validator.top();
            if ((ch == ')' && top == '(') ||
                (ch == ']' && top == '[') ||
                (ch == '}' && top == '{')) {
                validator.pop();
            } else {
                return false;  // Mismatched closing bracket
            }
        }
    }
    return validator.empty();  // Valid if no unmatched openings remain
}

};
