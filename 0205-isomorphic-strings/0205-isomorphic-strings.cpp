class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;

        vector<int> last_s(256,0),last_t(256,0);
        for(int i=0;i< s.length();i++){
            if(last_s[s[i]]!=last_t[t[i]]) return false;

            last_s[s[i]]=i+1;
            last_t[t[i]]=i+1;
        }
        return true;
    }
};