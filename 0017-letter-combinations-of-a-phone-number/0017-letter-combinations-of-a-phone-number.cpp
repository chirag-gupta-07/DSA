class Solution {
public:
    char keys(char t,char l){
        char s = (char)(((t-'2')*3)+l);
        return s;
    }

    void generate(string digits,int i,vector<string> &v,string temp){
        if(i>=digits.size()){
            v.push_back(temp);
            return;
        }
        if(digits[i]<'8'){
            generate(digits,i+1,v,temp+keys(digits[i],'a'));
            generate(digits,i+1,v,temp+keys(digits[i],'b'));
            generate(digits,i+1,v,temp+keys(digits[i],'c'));
        }else{
            generate(digits,i+1,v,temp+keys(digits[i],'b'));
            generate(digits,i+1,v,temp+keys(digits[i],'c'));
            generate(digits,i+1,v,temp+keys(digits[i],'d'));
        }

        if(digits[i]=='7'){
            generate(digits,i+1,v,temp+keys(digits[i],'d'));
        }

        if(digits[i]=='9'){
            generate(digits,i+1,v,temp+keys(digits[i],'e'));
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        generate(digits,0,ans,"");
        // cout<<(char)(keys('7','c')+1);

        return ans;
    }
};