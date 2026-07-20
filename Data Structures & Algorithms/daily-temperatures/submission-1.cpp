class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    
    int n=temperatures.size();
    vector<int>v(n,0);
    stack<int>st;

    for(int i=0;i<n;i++)
    {
        while(!st.empty() && temperatures[i]>temperatures[st.top()])
        {
            v[st.top()]=i-st.top();
            cout<<"push value in vactor(v[st.top])->"<<v[st.top()]<<"->"<<i-st.top()<<endl;
            st.pop();
        }
        st.push(i);
        cout<<"push value in stack->"<<i<<endl;
    }
    
    return v;
    }
};
