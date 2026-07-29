class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        double result=0.0;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<=nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(j<n2)
          {
            v.push_back(nums2[j]);
            j++;
          }
            while(i<n1)
          {
            v.push_back(nums1[i]);
            i++;
          }
        

        for(auto i:v)
        {
            cout<<i<<"  ";
        }
        
        cout<<endl;
        int m = v.size();
        cout<<m<<"---m--"<<endl;

        if(m % 2 != 0)
        {
           double x = (m+1)/2;
           cout<<"x------"<<x<<endl;
           result = v[x-1];
           cout<<"result------"<<result<<endl;
        }
        else
        {
            double x = v[(m/2)-1] + v[((m/2)+1)-1];
            cout<<"x------"<<x<<endl;
            cout<<"v[m/2]------"<<v[(m/2)-1]<<endl;
            cout<<"v[((m/2)+1)]------"<<v[((m/2)+1)-1]<<endl;
            result = x/2;
            cout<<"result------"<<result<<endl;
            
        }
        return result;
        
    }
};
