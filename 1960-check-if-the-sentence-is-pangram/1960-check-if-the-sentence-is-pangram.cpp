class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>arr(26,0);
        int count=0;
        for(char ch:sentence){
            int index=ch-'a';
            if(arr[index] == 0){
                arr[index]++;
                count++;
            }
        }
        return true?(count==26):false;
    }
};