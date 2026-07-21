class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        string t = "1" + s + "1";

        vector<pair<char,int>> runs;

        // Run Length Encoding
        for (int i = 0; i < t.size();) {
            int j = i;
            while (j < t.size() && t[j] == t[i]) j++;
            runs.push_back({t[i], j - i});
            i = j;
        }

        int active = 0;
        for (char c : s)
            if (c == '1') active++;

        int ans = active;

        int m = runs.size();

        // Try removing every valid 1-block
        for (int i = 1; i + 1 < m; i++) {

            // 0 - 1 - 0
            if (runs[i].first == '1' &&
                runs[i - 1].first == '0' &&
                runs[i + 1].first == '0') {

                int removed = runs[i].second;

                // merged zero block after removal
                int mergedZero =
                    runs[i - 1].second +
                    runs[i].second +
                    runs[i + 1].second;

                ans = max(ans, active - removed + mergedZero);
            }
        }

        // Remove the contribution of the two artificial sentinels
        return min(ans, n);
    }
};