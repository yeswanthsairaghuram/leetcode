class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> res;
        for(char ch:magazine){
            res[ch]++;
        }
        for(char ch:ransomNote){
            if(res[ch]<=0) {return false;}
            res[ch]--;
        }
        return true;
    }
};