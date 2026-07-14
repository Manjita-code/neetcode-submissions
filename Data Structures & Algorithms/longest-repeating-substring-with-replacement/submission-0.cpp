class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.size();
        int left=0;
        int maxfreq=0;
        int ans=0;
        vector<int>fre(26,0);
        for(int right=0;right<n;right++)
        {
          char ch=s[right];
          int ind=ch-'A';
          fre[ind]=fre[ind]+1;

          maxfreq=max(maxfreq,fre[ind]);

          while((right-left+1)-maxfreq>k)
          {
            fre[s[left]-'A']--;
            left++;
          }
          ans=max(ans,right-left+1);
        }
     return ans;   
    }
};
