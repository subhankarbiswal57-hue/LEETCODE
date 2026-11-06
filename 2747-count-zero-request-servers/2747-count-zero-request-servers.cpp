class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,
                             int x, vector<int>& queries) {

        // Step 1: Sort logs according to time
        sort(logs.begin(), logs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        // Step 2: Store queries with their original indices
        vector<pair<int, int>> q;

        for (int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        // Step 3: Initialise answer and frequency map
        vector<int> ans(queries.size());
        unordered_map<int, int> freq;

        int left = 0;
        int right = 0;

        // Step 4: Process sorted queries
        for (auto p : q) {

            int time = p.first;
            int idx = p.second;

            // Step 5: Add new requests
            while (right < logs.size() &&
                   logs[right][1] <= time) {

                int id = logs[right][0];

                freq[id]++;
                right++;
            }

            // Step 6: Remove old requests
            while (left < right &&
                   logs[left][1] < time - x) {

                int id = logs[left][0];

                freq[id]--;

                if (freq[id] == 0) {
                    freq.erase(id);
                }

                left++;
            }

            // Step 7: Count inactive servers
            ans[idx] = n - freq.size();
        }

        return ans;
    }
};