
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Store {frequency, number} in max heap
        priority_queue<pair<int, int>> pq;

        for (auto entry : freq) {
            pq.push({entry.second, entry.first});
        }

        vector<int> result;

        // Extract the k most frequent numbers
        for (int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
