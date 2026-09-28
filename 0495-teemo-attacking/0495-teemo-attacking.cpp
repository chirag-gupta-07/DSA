class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long long int cnt=0;
        int i=0;
        while(i<timeSeries.size()-1){
            int sec = timeSeries[i];
            int sec2 = timeSeries[i+1];
            if(sec2-sec <duration){
                cnt+=sec2-sec;
            }else{
                cnt+=duration;
            }
            i++;
        }


        cnt+=duration;
        return cnt;
    }
};