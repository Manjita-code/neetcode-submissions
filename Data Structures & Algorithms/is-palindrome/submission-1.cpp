class Solution {
public:
    bool isPalindrome(string s) {

        string a="";
        for(char i:s)
        {
            i=tolower(i);
            if(isalnum(i))
            {
                a+=i;
            }
        }
        string b=a;
        reverse(b.begin(),b.end());
        cout<<a<<"    "<<b;
        return a==b;
    }
};
