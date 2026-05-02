class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int>un;
        for(auto i:nums)
        {
            un.insert(i);
        }
        return nums.size()-un.size()>0;
        
    }
};