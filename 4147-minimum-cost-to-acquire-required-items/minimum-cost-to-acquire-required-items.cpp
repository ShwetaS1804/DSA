
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        long long mn = min(need1, need2);
        long long mx = max(need1, need2);

        long long a = 1LL * need1 * cost1 + 1LL * need2 * cost2;

        long long b = mn * costBoth
                    + 1LL * (need1 - mn) * cost1
                    + 1LL * (need2 - mn) * cost2;

        long long c = mx * costBoth;

        return min({a, b, c});
    }
};
