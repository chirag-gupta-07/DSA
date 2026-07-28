class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        int st=0;
        int mid=n/2;
        int end;
        if(n%2==0){
            sort(s.begin(),s.end()-mid);
            sort(s.begin()+mid,s.end(),greater<char>());
        }else{
            sort(s.begin(),s.end()-mid-1);
            sort(s.begin()+mid+1,s.end(),greater<char>());
        }
        return s;
    }
};