class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int idx = 0, end = target.size();

        for (int i = 1; i <= n; i++) {
            if (idx == end) break;

            ans.push_back("Push");
            if (i != target[idx]) ans.push_back("Pop");
            else idx++;
        } 
        return ans;
    }
};