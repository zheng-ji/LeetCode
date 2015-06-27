class Solution {

    public:

        string convertToTitle(int n) {
            string str;
            while(n) {
                int r = n % 26;
                n /= 26;
                if (r == 0) {
                    str += 'Z';
                    n--;
                } else {
                    str += ('A' + r-1);
                }
            }
            string result;
            for (int i = str.size()-1; i>=0; i--) {
                result += str[i];
            }
            return result;
        }

};
