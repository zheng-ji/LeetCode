class Solution {
    public:

        bool isIsomorphic(string s, string t) {

            if (s.size() != t.size()) 
                return false;

            char mapst[128] = {0};
            char mapts[128] = {0};



            for (int i = 0; i < s.size(); i++) {

                if (mapst[s[i]] == 0 && mapts[t[i]] == 0) {
                    
                    mapst[s[i]] = t[i];
                    mapts[t[i]] = s[i];

                } else if (mapst[s[i]] != t[i] || mapts[t[i]] != s[i]) {

                    return false;

                }
            }
            return true;
        }
};
