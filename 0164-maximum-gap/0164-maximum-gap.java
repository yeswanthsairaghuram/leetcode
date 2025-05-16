class Solution {
    public int maximumGap(int[] nums) {
        Stack<Integer> res=new Stack<>();
        if(nums.length<2) return 0;
        Arrays.sort(nums);
        int maxs=0;
        for(int i=0;i<nums.length-1;i++){
            maxs=Math.max(maxs,nums[i+1]- nums[i]);
        }
        return maxs;
    }
}