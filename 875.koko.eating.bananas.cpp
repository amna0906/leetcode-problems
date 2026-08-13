class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int k = left + (right - left) / 2;
            int hours = 0;
            for (int pile : piles) {
                hours += ceil((double)pile / k);
            }
            if (hours <= h)
                right = k;
            else
                left = k + 1;
        }
        return right;
    }
};