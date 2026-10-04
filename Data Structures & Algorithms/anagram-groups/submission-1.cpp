class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>mp;

        for(int i=0; i<strs.size(); i++){
            vector<int>count(26,0);

            for(int j=0; j<strs[i].length(); j++){
                count[strs[i][j] - 'a']++;
            }

            string key= "";

            for(int j=0; j<26; j++){
                key += to_string(count[j]) + '#'; 
            }

            mp[key].push_back(strs[i]);
        }

        for(auto it: mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
