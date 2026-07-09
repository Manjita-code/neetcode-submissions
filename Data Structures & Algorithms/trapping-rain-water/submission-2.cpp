class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 1) return 0;

        int leftmax=0;
        int rightmax=0;

        int result=0;

        int left=0;
        int right=n-1;
        while(left<right)  {
                            
          leftmax=max(leftmax,height[left]);
          rightmax=max(rightmax,height[right]);
          if(leftmax<rightmax)
          {
           int ans= leftmax - height[left];
           result+=ans;
           left++;
          }
          else
          {
           int ans= rightmax - height[right];
           result+=ans;
           right--;
          }
        }

        return result;

    }
};
