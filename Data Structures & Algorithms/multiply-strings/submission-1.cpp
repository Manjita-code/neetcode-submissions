class Solution {
public:
    string multiply(string num1, string num2) {

        long long a=stol(num1);
        long long b=stol(num2);
        long long c=a*b;
        string d=to_string(c);
        return d;
        
    }
};
