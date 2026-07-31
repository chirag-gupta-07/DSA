class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26,0);

        for(int i=0;i<word.size();i++){
            cnt[word[i]-'a']++;
        }
        sort(cnt.begin(),cnt.end(),greater());

        int sum=0;
        int flag=1;
        int j=0;
        for(int i=0;i<cnt.size();i++){
            if(j==8){
                flag++;
                j=0;
            }
            sum+=cnt[i]*flag;
            j++;
        }

        return sum;

    }
};