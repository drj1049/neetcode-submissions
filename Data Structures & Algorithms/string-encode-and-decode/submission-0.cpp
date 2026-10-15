
class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string word : strs) {
            result += to_string(word.length()) + "#" + word;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            // Find the # that separates length from word
            while (s[j] != '#') {
                j++;
            }

            // Convert the length into an integer
            int length = stoi(s.substr(i, j - i));

            // Extract the actual word
            string word = s.substr(j + 1, length);
            result.push_back(word);

            // Move to the next encoded word
            i = j + 1 + length;
        }

        return result;
    }
};
