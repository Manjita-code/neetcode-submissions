class Solution {
   public:
    string minWindow(string s, string t) {
        int n = s.size();

        unordered_map<char, int> mp;
        for (char c : t) {
            mp[c]++;
        }
        int size = INT_MAX;
        int ind = 0;
        for (int i = 0; i < n; i++) {
            char key = s[i];
            unordered_map<char, int> temp = mp;
            if (mp.find(key) != mp.end()) {
                int p = i;
                while (p < n && !temp.empty()) {
                    if (temp.find(s[p]) != temp.end()) {
                        temp[s[p]]--;

                        if (temp[s[p]] == 0) temp.erase(s[p]);
                    }
                    p++;
                }
                if (temp.empty()) {
                    if (t.size() == p - i) {
                        cout<<"we get fast and exactly same->"<<endl;
                        return s.substr(i, p - i);
                    } 
                    else if (size > p - i ) {
                            size = p - i;
                            ind = i;
                        }
                    
                }
            }
        }

        cout<<size<<"<-size"<<endl;
        cout<<"ind->"<<ind<<endl;

        if(size==INT_MAX)return  "";


        
        return s.substr(ind, size);
    }
};
