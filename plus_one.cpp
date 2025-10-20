class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            if (digits[digits.size() - 1] < 9) {
                digits[digits.size() - 1]++;
            } else {
                digits[digits.size() - 1] = 0;
                digits.push_back(0);
                digits[0] = 1;
            }
        return digits;
    }
};