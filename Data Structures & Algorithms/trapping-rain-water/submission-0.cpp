class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 1) return 0;

        int result=0;

        int left=1;
        int right=n-1;
        while(left<right)  {
                            
            int leftmax=0;
            int rightmax=0;
            for(int i=0;i<left;i++)
            {
                leftmax=max(leftmax,height[i]);
            }
            for(int i=right;i>left;i--)
            {
                rightmax=max(rightmax,height[i]);
            }

           int ans= max(0,min(rightmax,leftmax) - height[left]);

           result+=ans;
          
           left++;
        }

        return result;

    }
};
