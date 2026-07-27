class Solution {
public:
    int findMin(vector<int> &nums) {

        int n = nums.size();
        if(n==1)return nums[0];
        int i=0;
        int j=n-1;
        int ans=INT_MAX;
        while(i<j)
        {
            if(nums[i]>nums[j])
            {
                // cout<<"nums["<<i<<"]"<<">"<<"nums["<<j<<"]"<<endl;
                i++;
            }
            else if(nums[i]<nums[j])
            {
            //    cout<<"nums["<<i<<"]"<<"<"<<"nums["<<j<<"]"<<endl;
               
               j--;
            }
        }
        ans=min(nums[i],nums[j]);
        return ans;       
    }
};
