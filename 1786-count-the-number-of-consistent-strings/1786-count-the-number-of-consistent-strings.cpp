class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int chars[26]={0};
        int count=0;
        for (char ch:allowed){
            chars[ch-'a']=1;
        }
        for(string word : words){
           int flag=1;
           for( char ch : word){
             if(chars[ch-'a']==0){
                flag=0;
                break;
             }
           }
           count=count+flag;
        }
        return count;
    }
};