class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;

        for(int i=0;i<word.size();i++){
            mp[word[i]]++;
        }

        vector<pair<char,int>> cnt(mp.begin(),mp.end());
        sort(cnt.begin(),cnt.end(),[](const auto &a,const auto &b){
            return a.second>b.second;
        });

        int sum=0;
        int flag=1;
        int j=0;
        for(int i=0;i<cnt.size();i++){
            if(j==8){
                flag++;
                j=0;
            }
            // cout<<j<<"\n"<<cnt[i].first<<"\n";
            sum+=cnt[i].second*flag;
            // cout<<sum<<"\n";
            j++;
        }

        return sum;

    }
};