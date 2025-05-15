class Solution {
    public String reverseVowels(String s) {
        char[] a =s.toCharArray();
        int i=0, j=a.length-1;
        List<Character> vowels = Arrays.asList('a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U');
        while(i<j){
            if(!vowels.contains(a[i])){
               i++;
            }
            else if(!vowels.contains(a[j])){
                j--;
            }
            else{
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                i++;
                j--;
            }
        }
        return new String(a);
    }
}