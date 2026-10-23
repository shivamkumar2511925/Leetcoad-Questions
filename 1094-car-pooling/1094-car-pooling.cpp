class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int arr[1001] = {0};

        for (auto &trip : trips) {
            arr[trip[1]] += trip[0];
            arr[trip[2]] -= trip[0];
        }

        int passengers = 0;

        for (int i = 0; i <= 1000; i++) {
            passengers += arr[i];

            if (passengers > capacity) {
                return false;
            }
        }

        return true;
    }
};