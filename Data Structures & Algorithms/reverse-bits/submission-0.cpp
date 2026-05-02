class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        string a="";
        while(n>0)
        {
            int bit=n%2;
            a=char(bit+'0')+a;
            n=n/2;
        }
       
        while(a.size()!=32)
        {
            a='0'+a;
        }
        reverse(a.begin(),a.end());
        cout<<a;
        uint32_t b=stol(a,0,2);
        return b;

        
    }
};
