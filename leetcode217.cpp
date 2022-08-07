class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> m;
        for(auto num:nums)
            m[num]++;
        
        for(auto num:nums) {
            if(m.find(num) != m.end()) {
                m[num]--;
                if(m[num] > 0)
                    return true;
            }
            
        }
    
    return false;
    }
    
        
    
};