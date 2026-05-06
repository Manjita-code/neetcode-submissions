class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        unordered_map<int,int>un;
        priority_queue<pair<int,int> >pq;

        for(auto i: nums)
        {
            un[i]++;
        }

        for(auto i : un)
        {
           pq.push({i.second,i.first});
        } 

       vector<int> ans;
       while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;     
    }
};

