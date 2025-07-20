class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        for(char ch:s){
            map[ch]++;
        }
        int oddcnt=0;
        int cnt=0;
        for(auto it:map){
            int freq=it.second;
            if(freq%2==0){
                cnt+=freq;
            }
            else{
                cnt+=freq-1;
                oddcnt=1;
            }
        }
        return cnt+oddcnt;
    }
};