class Solution {
   public:
    bool isPalindrome(string s) {
        string left = "";
        for (char c : s) {
            if (c !=' ' && (isalpha(c) || isdigit(c))) {
                left += tolower(c);
            }
        }

        string right =left;
        reverse(left.begin(),left.end());
        cout<<"left-> "<<left<<" == "<<right<<" <-right";

        return left==right;
    }
};
