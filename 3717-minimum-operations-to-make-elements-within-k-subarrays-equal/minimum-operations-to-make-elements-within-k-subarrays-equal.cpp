
class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        multiset<int> l, r;
        long long sl = 0, sr = 0;

        auto balance = [&]() {
            while (l.size() > r.size() + 1) {
                int v = *l.rbegin();
                l.erase(prev(l.end()));
                r.insert(v);
                sl -= v;
                sr += v;
            }
            while (l.size() < r.size()) {
                int v = *r.begin();
                r.erase(r.begin());
                l.insert(v);
                sr -= v;
                sl += v;
            }
        };

        auto add = [&](int v) {
            if (l.empty() || v <= *l.rbegin()) {
                l.insert(v);
                sl += v;
            } else {
                r.insert(v);
                sr += v;
            }
            balance();
        };

        auto remove = [&](int v) {
            auto it = l.find(v);
            if (it != l.end()) {
                l.erase(it);
                sl -= v;
            } else {
                it = r.find(v);
                r.erase(it);
                sr -= v;
            }
            balance();
        };

        vector<long long> cost;

        for (int i = 0; i < n; i++) {
            add(nums[i]);

            if (i >= x) remove(nums[i - x]);

            if (i >= x - 1) {
                long long m = *l.rbegin();
                cost.push_back(
                    m * (long long)l.size() - sl +
                    sr - m * (long long)r.size()
                );
            }
        }

        const long long INF = 1e18;

        vector<vector<long long>> dp(
            k + 1, vector<long long>(n + 1, INF)
        );

        // FIX: Initialize the entire first row
        for (int i = 0; i <= n; i++)
            dp[0][i] = 0;

        for (int j = 1; j <= k; j++) {
            for (int i = 1; i <= n; i++) {
                dp[j][i] = dp[j][i - 1];

                if (i >= x) {
                    dp[j][i] = min(
                        dp[j][i],
                        dp[j - 1][i - x] + cost[i - x]
                    );
                }
            }
        }

        return dp[k][n];
    }
};

