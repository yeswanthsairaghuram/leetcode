class Solution {
    public int countDigits(int num) {
        int count = 0;
        int temp = num;
        
        while(temp > 0) {
            int digit = temp % 10; // Get the last digit
            temp = temp / 10; // Remove the last digit
            
            // Check if the digit divides the original number
            if (digit != 0 && num % digit == 0) {
                count++;
            }
        }
        
        return count;
    }
}
