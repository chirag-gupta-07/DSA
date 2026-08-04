class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        s=s+s;
        int flag=0;
        int cnt=0;

        for(int i=0;i<s.size()-goal.size();i++){
            if(s[i]==goal[0]){
                for(int j=0;j<goal.size();j++){
                    cout<<s[i+j]<<'\n';
                    cout<<goal[j]<<'\n';

                    if(s[i+j]==goal[j]){
                        flag=1;
                    }else if(s[i+j]!=goal[j]){
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1) return true; 
        }

        return false;
    }
};