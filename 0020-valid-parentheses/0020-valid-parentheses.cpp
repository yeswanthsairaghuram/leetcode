class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(char ch:s){
            if(ch=='(' || ch=='[' || ch=='{'){
                res.push(ch);
            }
            else{
                if(res.empty()) return false;
                char top=res.top();
            if(ch==')' && top=='(' || ch==']' && top=='[' || ch=='}' && top=='{'){
                res.pop();
            }else{
                return false;
            }
            }
            
        }
        return res.empty();

    }
};