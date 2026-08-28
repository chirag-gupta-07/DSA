class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int sum=0;
        string ans="";
        int i=0;
        while(i<num1.size() && i<num2.size()){
            int a=(num1[num1.size()-1-i])-(int)'0';
            int b=num2[num2.size()-1-i]-(int)'0';
            sum=a+b+carry;
            carry=sum/10;
            ans=char(sum % 10 + '0')+ans;
            i++;
        }

        while(i<num1.size()){
            int a=num1[num1.size()-1-i]-(int)'0';
            sum=a+carry;
            carry=sum/10;
            ans=char(sum % 10 + '0')+ans;
            i++;
        }

        while(i<num2.size()){
            int b=num2[num2.size()-1-i]-(int)'0';
            sum=b+carry;
            carry=sum/10;
            ans=char(sum % 10 + '0')+ans;
            i++;
        }

        if(carry){
            ans=to_string(carry)+ans;
        }

        return ans;
    }
};