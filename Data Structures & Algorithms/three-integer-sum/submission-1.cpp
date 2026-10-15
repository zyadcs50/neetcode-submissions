class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> unique;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    vector<int> triplet = {nums[i], nums[left], nums[right]};

                    sort(triplet.begin(), triplet.end());
                    unique.insert(triplet);

                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        for (auto triplet : unique) {
            res.push_back(triplet);
        }

        return res;
    }
};