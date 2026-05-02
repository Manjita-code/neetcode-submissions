class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(t.size()!=s.size())return false;
        unordered_map<char,int>un;
        for(int i=0;i<s.size();i++)
        {
            un[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            char key=t[i];
            if(un.find(key)!=un.end() && un[key]>0)
            {
              un[key]--;
            }
            else
            {
                return false;
            }
        }
        return true;        
    }
};
