class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int xorsum = 0;
        for (int i = 0; i < pref.size(); i++) {
            if (i == 0) ans.push_back(pref[0]);
            else {
                xorsum ^= ans[i - 1];
                ans.push_back(xorsum ^ pref[i]);
            }
        }
        return ans;
    }
};