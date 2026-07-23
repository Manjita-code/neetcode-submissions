class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int n=nums.size();

        int Mele=INT_MIN;

        vector<int>result;

        for(int i=0;i<k;i++)
        {
            Mele=max(Mele,nums[i]);
        }
        result.push_back(Mele);
        cout<<"First->"<<Mele<<endl;
        
        int l=0;
        for(int r=k;r<n;r++)
        {
            if(nums[l]==Mele)
            {
               cout<<"exiting element is max->"<<Mele<<endl;
               Mele=INT_MIN;
               int i=l+1;
               while(i<n && i<l+k+1)
               {
                Mele=max(Mele,nums[i]);
                i++;
               }
            cout<<"maximum  element in the window is"<<Mele<<endl;

            }
            else
            {
            cout<<"exiting element is not  max->"<<nums[l]<<"!="<<Mele<<endl;
            cout<<"so compare max with coming element"<<nums[r]<<endl;;  
            Mele=max(Mele,nums[r]);
            cout<<"maximum  element in the window is"<<Mele<<endl;
            }
            cout<<"maximum element in whole window push it------------------"<<endl;
            result.push_back(Mele);
            l++;
        }
        return result;
    }
};
