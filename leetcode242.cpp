class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
            return false;
        unordered_map<char, int> m;
        for(auto c:s) {
            if(m.find(c) == m.end())
                m[c] = 1;
            else
                m[c]++;
        }
            
        
        for(auto c:t){
            if(m.find(c) == m.end())
                return false;
            else if(m[c] >= 1)
                m[c]--;
            else if(m[c] < 1)
                return false;
            
        }
          
        return true;
    }
};