class Solution {

    public:

        int hammingWeight(uint32_t n) {
            int num = 0;
            while (n) {
                if (n & 1)
                    num ++;
                n = n >> 1;
            }
            return num;
        }

};
