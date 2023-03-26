class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            if(st.empty()) ans[i]=-1;
            else{
                while(st.size()>0 && st.top() <= a[i]) st.pop();
                if(st.empty()) ans[i]=-1;
                else ans[i] = st.top();
            }
            st.push(a[i]);
        }
        for(int i=n-1;i>=0;i--){
            if(st.empty()) ans[i]=-1;
            else{
                while(st.size()>0 && st.top() <= a[i]) st.pop();
                if(st.empty()) ans[i]=-1;
                else ans[i] = st.top();
            }
            st.push(a[i]);
        }
        return ans;
    }
};