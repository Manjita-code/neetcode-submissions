class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int mx = 0;
        for (auto i : piles) {
            mx = max(mx, i);
        }

        int low = 1;
        int high = mx;

        while (low < high) {
            int shift = 0;
            int mid = (high + low) / 2;
            for (int i = 0; i < n; i++) {
                shift += (piles[i] + mid - 1) / mid;
            }

            if (shift <= h) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
