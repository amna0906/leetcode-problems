class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> window1;
        unordered_map<char, int> window2;
        for (char count : s1) {
            window1[count]++;
        }
        int left = 0;
        for (int right = 0; right < s2.length(); right++) {
            window2[s2[right]]++;
            if ((right - left + 1) > s1.length()) {
                if (--window2[s2[left]] == 0) {
                    window2.erase(s2[left]);
                }
                left++;
            }
            if (window1 == window2) {
                return true;
            }
        }
        return false;
    }
};