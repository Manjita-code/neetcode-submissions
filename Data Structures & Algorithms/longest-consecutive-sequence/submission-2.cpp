class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        for(auto i:nums){cout<<i<<" ";}

        int count=1;

        int n=nums.size();
        if(n==1)return 1;
        int result=0;

        int i=0;
        int j=1;

        while(i<n-1 && j<n)
        {
            int cons=nums[j]-nums[i];
            if(cons<2 && cons>-1)
            {
                if(cons==1)
                {
                    count++;
                }
                i++;
                j++;
            }
            else
            {
                count=1;
                i=j;
                j++;
            }
            result=max(result,count);
        }

        return result;
        
    }
};
