class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int mx = 0;
        int n = nums1.size();

        for(int i = 0; i < n; i++){
            mx = max(mx, abs(nums1[i] - nums2[i]));
        }

        vector<long long> mp(mx + 1, 0);

        for(int i = 0; i < n; i++){
            int temp = abs(nums1[i] - nums2[i]);
            mp[temp]++;
        }

        long long k = 1LL * k1 + k2;

        for(int i = mx; i > 0; i--){
            long long l = min(mp[i], k);

            mp[i] -= l;
            mp[i-1] += l;
            k -= l;

            if(k == 0){
                break;
            }
        }

        long long ans = 0;

        for(int i = 0; i <= mx; i++){
            ans +=1LL * i * i * mp[i];
        }

        return ans;
    }
};