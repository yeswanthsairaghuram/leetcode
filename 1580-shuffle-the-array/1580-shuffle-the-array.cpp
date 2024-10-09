class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> s1;
        vector <int> s2;
        vector <int> res;
        for(int i=0;i<n;i++){
            s1.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            s2.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            res.push_back(s1[i]);
            res.push_back(s2[i]);
        }
        return res;
    }
};