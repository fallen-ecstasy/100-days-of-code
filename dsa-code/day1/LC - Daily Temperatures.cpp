class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n = a.size();
        stack<int> st;
        vector<int> ans(n);
        int cnt=0,temp;
        for(int i=n-1;i>=0;i--){
            if(st.empty()) ans[i] = 0;
            else if(st.size() > 0 && a[st.top()] > a[i]) ans[i] = 1;
            else{
                cnt = 0;
                while(st.size() > 0 && a[st.top()] <= a[i]){
                    cnt+=ans[st.top()];
                    st.pop();
                }
                if(st.empty()) ans[i] = 0;
                else ans[i] = cnt+1;
            }
            st.push(i);
        }
        return ans;
    }
};