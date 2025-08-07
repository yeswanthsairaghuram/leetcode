class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freqmap;
        for(int num:nums){
            freqmap[num]++;
        }
        int n=nums.size();
        vector<int> result;
        for(auto& [num,count]:freqmap){
            if(count > (n/3)){
                result.push_back(num);
            }
        }
        return result;
    }
};