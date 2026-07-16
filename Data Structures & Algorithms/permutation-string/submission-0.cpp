class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

              for (char c : s1)
            need[c - 'a']++;

        int left = 0;

        for (int right = 0; right < m; right++) {

           
            window[s2[right] - 'a']++;

            if (right - left + 1 > n) {
                window[s2[left] - 'a']--;
                left++;
            }

            
            if (right - left + 1 == n) {
                if (window == need)
                    return true;
            }
        }

        return false;
    }
};