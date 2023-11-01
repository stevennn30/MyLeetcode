class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq1;
        unordered_map<int, int> freq2;
        vector<vector<int>> ans;
        for (auto i : nums1) freq1[i]++;
        for (auto i : nums2) freq2[i]++;

        vector<int> tmp;
        for (auto i : freq1) if (!freq2.count(i.first)) tmp.push_back(i.first);
        ans.push_back(tmp);
        tmp = {};
        for (auto i : freq2) if (!freq1.count(i.first)) tmp.push_back(i.first);
        ans.push_back(tmp);
        
        return ans;
    }
};