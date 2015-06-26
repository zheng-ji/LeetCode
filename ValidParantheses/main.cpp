class Solution {

    public:

        bool isValid(string s) {
            if (s.size() == 0 || s.size() == 1) return false;
            vector<char> stack;
            stack.push_back(s[0]);
            for (int i=1; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    stack.push_back(s[i]);
                    continue;
                } 

                char current = stack.back();
                if (s[i] == ')' && current != '(') {
                    return false;
                }

                if (s[i] == '}' && current != '{') {
                    return false;
                }

                if (s[i] == ']' && current != '[') {
                    return false;
                }
                stack.pop_back();
            }

            if (stack.empty()) {
                return true;
            }

            else {
                return false;
            }
        }
};
