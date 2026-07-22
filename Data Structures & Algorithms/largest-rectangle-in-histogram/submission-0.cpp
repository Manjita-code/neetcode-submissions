class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> st;
        int n = heights.size();
        int Marea = 0;

        for (int r = 0; r < n; r++) {

            while (!st.empty() && heights[st.top()] > heights[r]) {

                int h = heights[st.top()];
                st.pop();

                int l = st.empty() ? -1 : st.top();

                int width = r - l - 1;

                Marea = max(Marea, h * width);
            }

            st.push(r);
        }

        // Process remaining bars
        while (!st.empty()) {

            int h = heights[st.top()];
            st.pop();

            int l = st.empty() ? -1 : st.top();

            int width = n - l - 1;

            Marea = max(Marea, h * width);
        }

        return Marea;
    }
};

