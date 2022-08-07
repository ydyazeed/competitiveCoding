class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, int> m = {{'(',-1}, {')',1}, {'{', -2}, {'}', 2}, {'[', -3}, {']', 3}};
        for(char c:s){
            if(m[c] < 0)
                st.push(c);
            else{
                if(st.empty() || m[st.top()]+m[c] != 0)
                    return false;
                else
                    st.pop();
            }
        }
        if(!st.empty())
            return false;
        else
            return true;
        
    }
};