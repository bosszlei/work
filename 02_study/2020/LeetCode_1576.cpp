class Solution {
public:
    string modifyString(string s) {
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'a';
                while (i < size - 1 && s[i] == s[i + 1]
                    || i > 0 && s[i] == s[i - 1])
                {
                    s[i] += 1;
                }
            }
        }
        return s;
    }
};