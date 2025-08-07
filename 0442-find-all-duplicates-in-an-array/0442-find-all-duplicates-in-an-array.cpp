class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return {};
        unordered_map<int,int>freqmap;
        for(int num:nums){
            freqmap[num]++;
        }
        vector<int>result;
        for(auto& [num,count]:freqmap){
            if(count==2){
                result.push_back(num);
            }
        }
        return result;
    }
};