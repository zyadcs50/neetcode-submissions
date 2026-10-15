class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (auto x : strs) {
            encoded += to_string(x.length());
            encoded += "#";
            encoded += x;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.length()) {

            int length = 0;

            // Read the length
            while (s[i] != '#') {
                length = length * 10 + (s[i] - '0');
                i++;
            }

            // Skip '#'
            i++;

            // Read the actual string
            string word = s.substr(i, length);

            result.push_back(word);

            // Move to the next encoded string
            i += length;
        }

        return result;
    }
};