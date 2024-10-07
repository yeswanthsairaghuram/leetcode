class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) {
            return false;
        }
        vector<int> s1Freq(26, 0), s2Freq(26, 0);
        for(char c : s1) {
            s1Freq[c - 'a']++;
        }

        int windowSize = s1.size();

        // First window of size s1 in s2
        for(int i = 0; i < windowSize; i++) {
            s2Freq[s2[i] - 'a']++;
        }

        // Sliding window
        for(int i = windowSize; i < s2.size(); i++) {
            if(s1Freq == s2Freq) {
                return true; // Found a permutation
            }

            // Slide the window: remove the first character of the previous window
            s2Freq[s2[i - windowSize] - 'a']--;
            // Add the new character in the current window
            s2Freq[s2[i] - 'a']++;
        }
        return s1Freq == s2Freq;
    }
};
