#include <ranges>

class Solution {
public:
    bool isPalindrome(string s) {
        s = s |
            std::views::filter([](char ch) { return std::isalnum(ch); }) | // filter, and keep only alpha numeric
            std::views::transform([](char ch) { return tolower(ch); }) | // map, cvt all to lower
            std::ranges::to<string>(); // convert ranges obj to string obj

        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i - 1])
                return false;
        }
        return true;
    }
};
