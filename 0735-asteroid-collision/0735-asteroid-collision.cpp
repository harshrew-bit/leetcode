class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (st.empty())
                st.push(asteroids[i]);
            else {
                if (st.top() > 0 && asteroids[i] < 0) {
                    while (!st.empty() && st.top() > 0 &&
                           abs(asteroids[i]) > abs(st.top()))
                        st.pop();
                    if (!st.empty() && st.top() > 0 &&
                        abs(asteroids[i]) >= abs(st.top()))
                        st.pop();
                    else if (st.empty() || st.top() < 0) {
                        st.push(asteroids[i]);
                    }
                } else
                    st.push(asteroids[i]);
            }
        }
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};