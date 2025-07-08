class Solution {
public:
    bool checkPerfectNumber(int num) {
       vector<int> res;
       for(int i=1;i<num;i++){
        if(num%i==0){
            res.push_back(i);
        }
       } 
       int sum=accumulate(res.begin(), res.end(), 0);
       if(sum == num) return true;
       else return false;
    }
};