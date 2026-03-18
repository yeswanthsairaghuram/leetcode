class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ts=0;
        for(int num:nums){
            ts+=num;
        }
        int ls=0;
        int rs=ts;
        for(int i=0;i<nums.size();i++){
            rs-=nums[i];
            if(ls==rs){
                return i;
            }
            ls+=nums[i];
        }
        return -1;


    }
};