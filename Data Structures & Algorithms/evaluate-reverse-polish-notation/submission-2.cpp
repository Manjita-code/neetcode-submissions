class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     
     stack<int>st;

     for(string token : tokens)
     {
        if(token=="+" || token=="-" || token=="*" || token=="/")
        {
            
            int num1 = st.top();
            cout<<"pop value(num1)->"<<num1<<endl;
            st.pop();
            int num2 = st.top();
            cout<<"pop value(num2)->"<<num2<<endl;
            st.pop();
            
            if(token=="+")
            {
                int c=num1+num2;
                cout<<"push value ->"<<c<<endl;
                st.push(c);
            }
            else if(token=="-")
            {
                int c=num2-num1;
                cout<<"push value ->"<<c<<endl;
                st.push(c);
            }
            else if(token=="*")
            {
                int c=num2*num1;
                cout<<"push value ->"<<c<<endl;
                st.push(c);
            }
            else{
                int c=num2/num1;
                cout<<"push value ->"<<c<<endl;
                st.push(c);
            }
            
        }
        else
        {
            int val=stoi(token);
            cout<<"push value ->"<<val<<endl;
            st.push(val);
        }
     }

     return st.top();

    }
};
