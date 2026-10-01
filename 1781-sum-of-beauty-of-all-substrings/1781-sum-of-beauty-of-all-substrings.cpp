class Solution {
public:
    int beautySum(string s) {
        int cnt=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            vector<int> v(26,-1);
            j=i;
            while(j<s.size()){
                if(v[s[j]-'a']==-1){
                    v[s[j]-'a']= 1;
                }else{
                    v[s[j]-'a']++;
                }
                int most=0;
                int least=INT_MAX;
                for(int k=0;k<26;k++){
                    if(v[k]!=-1){
                        most = max(v[k],most);
                        least = min(v[k],least);
                    }
                }

                if(least!=INT_MAX){
                    cnt+=most-least;
                }
                j++;
            }
        }

        return cnt;
    }
};