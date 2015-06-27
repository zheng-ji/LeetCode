class Solution {

    public:

        int titleToNumber(string s) {

            if (s.size() == 0) {

                return 0;

            }

            int sum = 0;

            for (int i=0; i<s.size(); i++) {

                sum += (s[i]-'A'+1) * pow(26,s.size()-i-1);

            }

            return sum;

        }

};
