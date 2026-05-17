class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string &str : strs)
        {
            encoded += to_string(str.length()) + "#" + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        string len = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '#') len += s[i];
            else {
                int l = stoi(len);
                len = "";
                decoded.push_back(s.substr(i + 1, l));
                i = i + l;
            }
        }

        return decoded;
    }
};
