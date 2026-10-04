class Solution {
public:
    void generate(string digits,int i,vector<string> &v,string temp,string mapping[]){
        if(i>=digits.size()){
            v.push_back(temp);
            return;
        }
        
        for(int j=0;j<mapping[digits[i]-'2'].size();j++){
            generate(digits,i+1,v,temp+mapping[digits[i]-'2'][j],mapping);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string mapping[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        generate(digits,0,ans,"",mapping);
        // cout<<(char)(keys('7','c')+1);

        return ans;
    }
};