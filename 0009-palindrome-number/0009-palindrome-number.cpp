class Solution {
public:
    bool isPalindrome(int x) {
        int temp=0;
        if(x<0) return 0;
        int dup=x;
        while(x!=0){
            int ld=x%10;
             if (temp > INT_MAX / 10 || temp < INT_MIN / 10)
                return false;
            temp=(temp*10)+ld;
            x=x/10;
        }
        return dup==temp;
    }
};