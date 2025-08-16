class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        bool flag = false;
        if (n < 2) {
            return s;
        }
        int start = 0, end = 1;
        while (end < n) {
            if (s[start] == s[end]) {
                s.erase(start, 2);
                flag = true;
                if (flag == true) {
                    start = 0, end = 1;
                }
            }
            else
             start++, end++;
        }
        return s;
    }
};