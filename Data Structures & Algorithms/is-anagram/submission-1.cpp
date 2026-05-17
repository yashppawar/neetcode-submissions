#include <cstring>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // i remember this a bit, we will use array instead of hashmap, 
        // as its lowercase letters only, it wont break our array
        int count_s[26];
        int count_t[26];

        memset((void*)&count_s, 0, 26 * sizeof(int));
        memset((void*)&count_t, 0, 26 * sizeof(int));

        for (int i = 0; i < s.length(); i++)
            count_s[s[i] - 'a']++;

        for (int i = 0; i < t.length(); i++)
            count_t[t[i] - 'a']++;

        for (int i = 0; i < 26; i++)
            if (count_s[i] != count_t[i])
                return false;

        return true;
    }
};
