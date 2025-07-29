// LeetCode 8: String to Integer (atoi)
// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        long r = 0;
        bool n = false;
        int i = 0;

        // Skip leading spaces
        while (i < s.length() && s[i] == ' ') i++;

        // Handle optional '+' or '-'
        if (s[i] == '-') {
            n = true;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        // Parse digits
        while (i < s.length() && isdigit(s[i])) {
            r = r * 10 + (s[i] - '0');

            // Clamp to avoid overflow
            if (!n && r > INT_MAX) return INT_MAX;
            if (n && -r < INT_MIN) return INT_MIN;

            i++;
        }

        if (n) r = -r;
        return (int)r;
    }
};
