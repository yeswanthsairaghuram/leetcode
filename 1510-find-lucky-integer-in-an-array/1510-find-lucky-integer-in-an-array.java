class Solution {
    public int findLucky(int[] arr) {
        HashMap<Integer, Integer> freqmap=new HashMap<>();
        for(int n: arr){
            freqmap.put(n, freqmap.getOrDefault(n,0)+1);
        }
        int luckynumber=-1;

        for(int key: freqmap.keySet()){
            if(freqmap.get(key)==key){
                luckynumber=Math.max(luckynumber,key);
            }
        }
        return luckynumber;
    }
}