class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {


        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]+=1;
                return digits;
            }
            else
            {
                digits[i]=0;
            }
        }
        vector<int>v;
        v.push_back(1);

        for(int i=0;i<digits.size();i++)
        {
           v.push_back(0);
        }
        return v;
        // long long num=0;
        // int i=0;
        // while(i<digits.size())
        // {
        //    num=num*10+digits[i];
        //    i++;
        // }        
        // cout<<num<<endl;
        // int ans=num+1;
        // cout<<ans;
        // vector<int>v;
        // while(ans>0)
        // {
        //     int a=ans%10;
        //     v.push_back(a);
        //     ans/=10;
        // }
        // reverse(v.begin(),v.end());
        // return v;
    }
};
