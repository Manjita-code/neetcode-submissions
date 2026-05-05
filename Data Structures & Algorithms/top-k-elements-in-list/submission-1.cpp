class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        unordered_map<int,int>un;
        vector<int>v;
        vector<pair<int,int>> vp;

        for(auto i: nums)
        {
            un[i]++;
        }

        for(auto i : un)
        {
           vp.push_back({i.second,i.first});
        } 
        sort(vp.begin(),vp.end() , greater<pair<int,int>>());

        for(auto i: vp)
        {
            v.push_back(i.second);
            k--;
            if(k==0)break;
        }  
        return v;     
    }
};
