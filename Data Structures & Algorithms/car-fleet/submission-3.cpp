class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       
       int n=position.size();
       if(n==1)return 1;
       vector<pair<int,double>>v;
        for(int i=0;i<n;i++)
        {
            int d = target-position[i];
            double t = double(d)/speed[i];
            v.push_back({position[i],t});      
        }   
        sort(v.rbegin(),v.rend());
        for(auto i:v)
        {
            cout<<i.first<<"-"<<i.second<<endl;
        }
        int final=1;
        double fleetTime=v[0].second;
        for(int i=1;i<n;i++)
        {
            if(fleetTime<v[i].second)
            {
                fleetTime=v[i].second;
                final++;
            }            

        }

        return final;     
    }
};
