class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> map;

        for (auto x : strs) {
            string s = x;
            sort(s.begin(), s.end());

            map[s].push_back(x);
        }

        vector<vector<string>> result;

        for (auto group : map) {
            result.push_back(group.second);
        }

        return result;
    }
};