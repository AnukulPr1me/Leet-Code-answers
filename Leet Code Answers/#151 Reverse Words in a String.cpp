class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int length = 0;
        string ans = "";
        string temp = "";

        while (length < n) {
            while (s[length] == ' ' && length < n) {
                length++;
            }

            while (s[length] != ' ' && length < n) {
                temp += s[length];
                length++;
            }

            if (!temp.empty()) {
                if (ans.empty()) {
                    ans = temp;
                } else {
                    ans = temp + " " + ans;
                }
                temp = ""; 
            }
        }
        return ans;
    }
};
