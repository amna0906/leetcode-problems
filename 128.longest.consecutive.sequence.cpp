class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums) {
            s.insert(num);
        }
        int longest = 0;
        for (int num : s) {
            if (s.find(num - 1) == s.end()){
                int count = 1;

                while (s.find(num + count) != s.end()) {
                    count++;
                }

                longest = max(longest, count);
                }
        }
        return longest;
    }
};