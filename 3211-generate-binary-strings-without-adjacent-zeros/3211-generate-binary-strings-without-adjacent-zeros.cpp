class Solution {
public:

    void generate(vector<string> &v,int n,int i,string temp){
        if(i==n){
            v.push_back(temp);
            return;
        }

        if(i==0){
            generate(v,n,i+1,temp+"0");
            generate(v,n,i+1,temp+"1");
        }else if(i<n){
            if(temp[i-1]=='0'){
                generate(v,n,i+1,temp+"1");
            }else{
                generate(v,n,i+1,temp+"0");
                generate(v,n,i+1,temp+"1");
            }
        }

        return;
    }

    vector<string> validStrings(int n) {
        vector<string> a;
        generate(a,n,0,"");
        return a;
        
    }
};