class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return 0;
        int maxs=0;
        for(int i=0;i<n-1;i++){
            maxs=max(maxs,nums[i+1]- nums[i]);
        }
        return maxs;
    }
};