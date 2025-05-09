class Solution {
    public int count(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+=r*r;
            n=n/10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        while(n>9){
            n=count(n);
        }        
        return (n==1 || n==7);
    }
}