class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1, l2, i = 0, j = 0, k = 0;

        l1 = word1.length();
        l2 = word2.length();
        string fin;
        fin.resize(l1 + l2);
        while (i < l1 && j < l2) {
            fin[k] = word1[i];
            k++;
            fin[k] = word2[j];
            k++;
            i++;
            j++;
        }
        while (i < l1) {
            fin[k] = word1[i];
            i++;
            k++;
        }
        while (j < l2) {
            fin[k] = word2[j];
            j++;
            k++;
        }
        return fin;
    }
};
