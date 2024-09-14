class Solution {
public:
    int numberOfMatches(int n) {
        int sum = 0;
        int m;
        while (n != 1) {
            if (n % 2 == 0) {
                m = n / 2;
                n = n / 2;
            } else {
                m = (n - 1) / 2;
                n = m + 1;
            }
            sum = sum + m;
        }
        return sum;
    }
};