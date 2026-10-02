class Solution {
public:
    void addElements(vector<string> & p,int n,int in,int out,string temp){
        if(in==n && out==n){
            p.push_back(temp);
            return;
        }
        if(in<n){
            addElements(p,n,in+1,out,temp+'(');
        }
        if(out<in){
            addElements(p,n,in,out+1,temp+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        addElements(ans,n,0,0,"");
        return ans;
    }
};