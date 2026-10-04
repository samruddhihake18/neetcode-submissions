class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int>count1(26,0);

        for(int i = 0; i<s.size(); i++){
            count1[s[i] - 'a']++;
        }

        vector<int>count2(26,0);
        for(int i = 0; i<t.size(); i++){
            count2[t[i] - 'a']++;
        }

        for(int i=0; i< count1.size(); i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
    }
};
