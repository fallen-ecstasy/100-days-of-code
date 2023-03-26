class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();

        stack<int> st;
        map<int,int> mp;

        for(int i=m-1;i>=0;i--){
            if(st.empty()) mp[b[i]] = -1;
            else{
                while(st.size()>0 && st.top() <= b[i]) st.pop();
                if(st.empty()) mp[b[i]] = -1;
                else mp[b[i]] = st.top();
            }
            st.push(b[i]);
        }
        for(int i=0;i<n;i++) a[i] = mp[a[i]];
        return a;
    }
};
