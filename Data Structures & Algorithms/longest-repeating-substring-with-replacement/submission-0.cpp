class Solution {
   public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxf = 0;
        int maxarr[26] = {};
        int res = 0;
        for (int r = 0; r < s.length(); r++) {
            maxarr[s[r] - 'A']++;
            maxf = max(maxf, maxarr[s[r] - 'A']);

            while ((r - l + 1) - maxf > k) {
                maxarr[s[l] - 'A']--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};
