class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> a={"0","1"};

        for(int i=0;i<n-1;i++){
            int t=a.size();
            for(int j=0;j<t;j++){
                
                if(a[j][i]=='0'){
                    a[j]+="1";
                }else if(a[j][i]=='1'){
                    
                    a.push_back((a[j]+"1"));
                    a[j]+="0";
                }
            }
        }

        return a;
        
    }
};