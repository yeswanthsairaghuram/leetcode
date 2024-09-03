class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(begin(nums), end(nums));
        double ans = INT_MAX;
        int i = 0, j = nums.size()-1;
        while(i <= j)
            ans = min(ans, (nums[i++]+nums[j--])/2.0);
        return ans;
    }
};