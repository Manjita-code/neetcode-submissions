class Solution {
public:
    bool isAnagram(string s, string t) {
        
       int n=t.size();

       if(t.size()!=s.size())return false;
       unordered_map<char,int> mp;

       for(auto i:s)    
       {
        mp[i]++;
       }

       for(int i=0;i<n;i++)
       {
        char key = t[i];
        if(mp.find(key)!= mp.end() && mp[key]>0)
        {
            mp[key]--;
        }
       }

       for(auto i:mp)
       {
        if(i.second>0)return false;
       }

       return true;
       
    }
};
