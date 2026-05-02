class Solution {
public:
    string multiply(string num1, string num2) {

        int m=num1.size();
      int n=num2.size();
      vector<int>v(m+n,0);

      for(int i=m-1;i>=0;i--)
      {
        for(int j=n-1;j>=0;j--)
        {
            int mul=(num1[i]-'0')*(num2[j]-'0');

            int sum=mul+v[i+j+1];

            v[i+j+1]=sum%10;
            v[i+j]+=sum/10;
        }
      }
      string ans="";

      for(int i=0;i<v.size();i++)
      {
        if(!(ans.empty() && v[i]==0))
        {
            ans+=char(v[i]+'0');
        }
      }
      return ans.empty()? "0":ans;       
    }
};
