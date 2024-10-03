class Solution {
public:
    bool check(vector<int>& nums) {
        bool e = is_sorted(nums.begin(), nums.end());
        if (e == true) return true;

        int cnt = 0;
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i + 1] < nums[i]) cnt = i;
        }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + (nums.size() - cnt - 1));
        reverse(nums.begin() + (nums.size() - cnt - 1), nums.end());
        return is_sorted(nums.begin(), nums.end());
    }
};