class Solution {
public:
    int longestPalindrome(string s) {
        int arr[52];
        for(int i=0;s[i]!='\0';i++){
            if(s[i]<='z' && s[i]>='a'){
                arr[(s[i])-'a']++;
            }else{
                arr[s[i]-'A'+26]++;
            }
        }

        int cnt=0;
        int one=0;
        for(int i=0;i<52;i++){
            if(one==0 && arr[i]%2==1){
                one++;
                cnt++;
            }
            cnt+=(arr[i]/2)*2;
        }

        return cnt;
    }
};