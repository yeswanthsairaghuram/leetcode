class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        int n=nums.size();
        int i=0;
        while(i<n){
            int start=i;
            while(i+1 <n && nums[i]+1==nums[i+1]){
                i++;
            }
            if(start==i){
                res.push_back(to_string(nums[start]));
            }
            else{
                res.push_back(to_string(nums[start])+ "->" +to_string(nums[i]));
            }
            i++;
        }
        return res;
    }
};