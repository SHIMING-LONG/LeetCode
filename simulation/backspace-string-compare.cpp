class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length() - 1;
        int j = t.length() - 1;
        int skipS = 0, skipT = 0;

        while (i >= 0 || j >= 0) {
            // 1. 在 S 中找到下一个有效字符
            while (i >= 0) {
                if (s[i] == '#') { skipS++; i--; }
                else if (skipS > 0) { skipS--; i--; }
                else break;
            }
            // 2. 在 T 中找到下一个有效字符
            while (j >= 0) {
                if (t[j] == '#') { skipT++; j--; }
                else if (skipT > 0) { skipT--; j--; }
                else break;
            }

            // 3. 比较这两个有效字符
            if (i >= 0 && j >= 0) {
                if (s[i] != t[j]) return false;
            } else {
                // 如果一个走完了另一个没走完，说明有效字符个数都不一样
                if (i >= 0 || j >= 0) return false;
            }
            i--; j--;
        }
        return true;
    }
};