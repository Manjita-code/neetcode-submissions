class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

       int n=temperatures.size();
  
       vector<int> result;
       int count=0;

       for(int i=1;i<n;i++)
       {
        int key=temperatures[i-1];
        int j=i;

        while(j<n && temperatures[j]<=key)
        {
            j++;            
        }
        if(j==n)
        {
            result.push_back(0);
        }
        else{
            result.push_back(j-(i-1)); 
        }
       }
       result.push_back(0);    
       return result;

    }
};
