class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n= s.size();
        int l=0;
        unordered_map<char,int> mp;
        int result=0;
        for(int r=0;r<n;r++)
        {
            char key=s[r];

            if(mp.find(key)==mp.end())
            {
              mp[key]=r;
            }
            else if(mp[key]>=l)
            {
              l=mp[key]+1;
            }
            mp[key]=r;
            result = max(result,r-l+1);
        }
        return result;
    }
};
