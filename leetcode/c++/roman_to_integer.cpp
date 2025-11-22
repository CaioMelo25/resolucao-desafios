class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = romanValues[s.back()];

        for (int i = s.length() - 2; i >= 0; i--) {
            if (romanValues[s[i]] < romanValues[s[i + 1]]) {
                result -= romanValues[s[i]];
            } else {
                result += romanValues[s[i]];
            }
        }
        
        return result;
    }
};