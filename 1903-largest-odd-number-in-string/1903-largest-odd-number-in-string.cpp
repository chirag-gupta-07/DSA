class Solution {
public:
    string largestOddNumber(string num) {
        if(num =="") return "";
        if((num[num.size()-1]-'0')%2!=0){
            return num;
        }

        int i=num.size()-1;
        while(i>=0 && (num[i]-'0')%2==0){
            i--;
        }

        if(i==-1){
            return "";
        }else{
            return num.substr(0,i+1);
        }
    }
};