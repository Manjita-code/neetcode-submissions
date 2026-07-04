class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

    unordered_map<int,int>mp;
    vector<pair<int,int>> result;
    vector<int>ans;
    for(int i=0;i<nums.size();i++)
    {
       mp[nums[i]]++;
    }

    for(auto i:mp)
    {
      result.push_back({i.second,i.first});
    }

    sort(result.rbegin(),result.rend());

  
    for(int i=0;i<k;i++)
    {
        ans.push_back(result[i].second);
      
    }

     return ans;

    }
};
