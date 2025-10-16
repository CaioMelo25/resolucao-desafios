class Solution {
public:
    bool isValid(string s) {
        stack<char> openBrackets;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                openBrackets.push(c);
            }
            else if (c == ')') {
                if (openBrackets.empty() || openBrackets.top() != '(') {
                    return false;
                }
                openBrackets.pop();
            }
            else if ( c == '}') {
                if (openBrackets.empty() || openBrackets.top() != '{') {
                    return false;
                }
                openBrackets.pop();
            }
            else if ( c == ']') {
                if (openBrackets.empty() || openBrackets.top() != '[') {
                    return false;
                }
                openBrackets.pop();
            }
        }
        return openBrackets.empty();
    }
};