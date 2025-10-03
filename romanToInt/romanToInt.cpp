class Solution {
public:
    int romanToInt(string s) {
        int nr = 0, i = 0;
        while (i < s.length()) {
            switch (s[i]) {
                case 'I':
                    if (i < s.length() - 1) {
                        if (s[i + 1] == 'V') {
                            nr += 4;
                            i++;
                            break;
                        } else if (s[i + 1] == 'X') {
                            nr += 9;
                            i++;
                            break;
                        }
                    }
                    nr += 1;
                    break;
                case 'V':
                    nr += 5;
                    break;
                case 'X':
                    if (i < s.length() - 1) {
                        if (s[i + 1] == 'L') {
                            nr += 40;
                            i++;
                            break;
                        } else if (s[i + 1] == 'C') {
                            nr += 90;
                            i++;
                            break;
                        }
                    }
                    nr += 10;
                    break;
                case 'L':
                    nr += 50;
                    break;
                case 'C':
                    if (i < s.length() - 1) {
                        if (s[i + 1] == 'D') {
                            nr += 400;
                            i++;
                            break;
                        } else if (s[i + 1] == 'M') {
                            nr += 900;
                            i++;
                            break;
                        }
                    }
                    nr += 100;
                    break;
                case 'D':
                    nr += 500;
                    break;
                case 'M':
                    nr += 1000;
                    break;
                default:
                    break;
            }
            i++;
        }
        return nr;
    }
};
