class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";

        for (char c : s) {
            if (isalnum(c)) {
                s2 += tolower(c);
            }
        }

        string reversed = s2;
        reverse(reversed.begin(), reversed.end());

        return s2 == reversed;
    }
};