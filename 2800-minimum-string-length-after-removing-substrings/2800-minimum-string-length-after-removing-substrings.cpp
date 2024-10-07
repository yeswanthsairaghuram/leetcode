class Solution {
public:
    int minLength(string s) {
        stack <char> stack;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(stack.empty()){
                stack.push(c);
                continue;
            }
            if(c=='B' && stack.top()=='A'){
                stack.pop();
            }
            else if(c=='D' && stack.top()=='C'){
                stack.pop();
            }
            else{
                stack.push(c);
            }
        }
        return stack.size(); 
    }
};