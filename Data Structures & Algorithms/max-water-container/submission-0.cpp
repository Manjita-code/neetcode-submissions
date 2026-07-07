class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n=heights.size();
        int i=0,j=n-1;
        cout<<j;
        int result=0;
        while(i<j)
        {
            int width= abs(j-i);
            int len=min(heights[i],heights[j]);
            result=max(result,width*len);

            if(heights[i]<heights[j])
            {
                i++;
            }
            else{
                j--;
            }
 
        }
        return result;
    }
};
