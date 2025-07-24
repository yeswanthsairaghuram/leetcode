class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int upper=0;
        for(char ch:word){
            if(isupper(ch)) upper++;
        }
        return upper==n || upper == 0 || (upper == 1 && isupper(word[0]));;
    }
};