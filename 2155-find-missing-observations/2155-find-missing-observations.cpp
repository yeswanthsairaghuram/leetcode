class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int r=((rolls.size()+n)*mean);
        for(int i=0;i<rolls.size();i++){
            r-=rolls[i];
        }
        if(r < n || r > 6*n) return vector<int>();
        vector<int> res(n);
        int j=0;
        for(int i=6;i>0;i--){
            while(r - i >= n - 1 && n != 0){
                res[j]=i;
                j++;
                r-=i;
                n--;
            }
        }
        return res;
    }
};