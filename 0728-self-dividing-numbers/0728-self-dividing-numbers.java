class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> res=new ArrayList<>();
        for(int i=left;i<=right;i++){
            if(selfdividing(i)){
                res.add(i);
            }
        }
        return res;
        
    }
    public boolean selfdividing(int num){
        int dup=num;
        while(num!=0){
           int rem=num%10;
           if(rem==0 || dup%rem!=0 ) return false;
           num/=10; 
        }
        return true;
    }
}