class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(m*n!=original.size()){
            return {};
        }
         vector<vector<int>> arr2D(m, vector<int>(n));
        for(int i=0;i<m*n;i++){
             arr2D[i / n][i % n] = original[i];
        }
            return arr2D;
    }
};