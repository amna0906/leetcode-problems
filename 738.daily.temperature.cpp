class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> answer(temperatures.size(), 0);

        stack<int> st;

        for (int i = 0; i < temperatures.size(); i++) {

            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {

                int previousDay = st.top();
                st.pop();

                answer[previousDay] = i - previousDay;
            }

            st.push(i);
        }

        return answer;
    }
};