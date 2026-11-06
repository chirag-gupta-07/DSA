class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;

        while(x || y){
            int t1=x%2;
            int t2=y%2;
            cout<<t1<<" "<<t2<<"\n";
            if(t1!=t2){
                cnt++;
            }

            x=x/2;
            y=y/2;
        }

        return cnt;
    }
};