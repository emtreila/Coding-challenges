class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int y = x;
        int n = 0;
        while (y != 0) {
            y /= 10;
            n++;
        }
        y = x;
        long nr = 0;
        while (n != 0) {
            nr = nr * 10 + y % 10;
            n--;
            y /= 10;
        }
        if (x == nr) {
            return true;
        }
        return false;
    }
};
