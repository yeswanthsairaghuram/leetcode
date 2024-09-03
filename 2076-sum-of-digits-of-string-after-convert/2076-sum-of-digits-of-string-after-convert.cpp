class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        for(int i = 0; i < s.size(); i++) {
            temp += to_string(s[i] - 'a' + 1);
        }
        while(k) {
            int n = 0;
            for(int i = 0; i < temp.size(); i++) 
                n += (temp[i] - '0');
            temp = to_string(n);
            k--;
        }
        return stoi(temp);
    }
};
