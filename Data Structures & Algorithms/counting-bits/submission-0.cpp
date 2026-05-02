class Solution {
public:

    int nu(int n)
    {
        int count=0;
        while(n>0)
        {
            n=n&(n-1);
            count++;
        }
        return count;
    }


    vector<int> countBits(int n) {

        vector<int>ans;
        int i=0;
        while(i<=n)
        {
            int a=nu(i);
            ans.push_back(a);      
            i++;                     
        }
        return ans;
        
    }
};
