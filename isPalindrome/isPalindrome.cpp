class Solution {
public:
    bool isPalindrome(int x) {
        string nr = to_string(x);
        for (int i = 0; i < nr.length(); i++) {
            if (nr[i] != nr[nr.length() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
