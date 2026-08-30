class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    int n = asteroids.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&st.top()>0&&asteroids[i]<0&&abs(asteroids[i])>abs(st.top())){
            st.pop();
        }
        if(st.empty()||st.top()<0||asteroids[i]>0){
            st.push(asteroids[i]);
        }
        else if(abs(asteroids[i])==abs(st.top())){
            st.pop();
        }
    }  
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }  
    reverse(ans.begin(),ans.end());
    return ans;
    }
};