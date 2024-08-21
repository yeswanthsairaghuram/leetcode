class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int count = 0;
        for (String o : operations) {
            if (o.equals("--X") || o.equals("X--")) {
                count = count - 1;
            } else if (o.equals("++X") || o.equals("X++")) {
                count = count + 1;
            }
        }
        return count;
    }
}
