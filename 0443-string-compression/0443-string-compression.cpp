class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        char prev = chars[0];
        int count = 1;
        for (int x = 1; x < size; x++) {
            if (chars[x] == prev) {
                count++;
            } else {
                chars.push_back(prev);
                if (count > 1) {
                    string cntStr = to_string(count);
                    for (char c : cntStr) {
                        chars.push_back(c);
                    }
                }

                prev = chars[x];
                count = 1;
            }
        }
        chars.push_back(prev);
        if (count > 1) {
            string cntStr = to_string(count);
            for (char c : cntStr) {
                chars.push_back(c);
            }
        }

        chars.erase(chars.begin(), chars.begin() + size);
        return chars.size();
    }
};