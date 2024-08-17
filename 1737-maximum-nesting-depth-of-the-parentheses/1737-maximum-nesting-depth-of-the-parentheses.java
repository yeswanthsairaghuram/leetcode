class Solution {
    public int maxDepth(String s) {
        int max=0;
        int currentdepth=0;
        for(char c: s.toCharArray()){
            if(c == '('){
                currentdepth++;
                max=Math.max(max,currentdepth);
            }
            else if(c== ')'){
                currentdepth--;
            }
        }
        return max;
    }
}