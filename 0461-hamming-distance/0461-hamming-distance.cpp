class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        string t1=bitset<32>(x).to_string();
        string t2=bitset<32>(y).to_string();
        for(int i=0;i<t1.size();i++){
            if(t1[i]!=t2[i]){
                count++;
            }
        }
        return count;
    }
};