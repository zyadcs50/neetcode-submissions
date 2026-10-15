class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int count = 1;
        if(nums.size() == 0) {
            return 0;
        }
        int maxCount = 1;
        sort(nums.begin(), nums.end());
        set<int> n;


        for(auto x: nums){
            n.insert(x);
        }

        vector<int> result;
        for(auto x: n){
            result.push_back(x);
        }

        for(int i = 0; i < (int)result.size() - 1; i++){
            if(result[i + 1] - result[i] == 1){
                count++;
            } else {
                count = 1;
            }
            maxCount = max(maxCount, count);
        }


        return maxCount;
    }
};
