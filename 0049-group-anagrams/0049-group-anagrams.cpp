class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mpp;

        for (auto x : strs){
            vector<int> alphs(26, 0);

            for (auto c : x){
                alphs[c - 'a']++;
            }
            mpp[alphs].push_back(x);
        }

        for(auto x : mpp){
            ans.push_back(x.second);
        }

        return ans;
    }
};