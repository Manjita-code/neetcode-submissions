class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

       unordered_set<int> mp;

       for(auto i:nums)
       {
        mp.insert(i);
       }       
       return mp.size()-nums.size();
    }
};




