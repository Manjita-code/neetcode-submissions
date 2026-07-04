class Solution {
public:

    string encode(vector<string>& strs) {


        string ans="";
        for(int i=0;i<strs.size();i++)
        {
            ans+=to_string(strs[i].size());
            ans+='#';
            ans+=strs[i];

     
        }
        //  for(string i:strs)
        // {
        //     cout<<i<<" ";
        // }

        for(char i:ans)
        {
            cout<<i<<" ";
        }
        return ans;
    }

    vector<string> decode(string s) {
    
    vector<string> decodeR;

   
       int i=0;
        while(i<s.size())
        {
           int j=i;
           while(j<s.size() && s[j]!='#')
           {
            j++;
           }

           int len= stoi(s.substr(i,j-i));
        //    cout<<"length"<<len<<end;

           string word=s.substr(j+1,len);
           decodeR.push_back(word);

           i=j+1+len;
        }
        return decodeR;
    }




};
