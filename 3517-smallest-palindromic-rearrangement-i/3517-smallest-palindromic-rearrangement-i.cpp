class Solution {
public:
    string smallestPalindrome(string s) {
        int mid=s.size()/2;
        if(s.size()%2==0){
            sort(s.begin(),s.end()-mid);
            sort(s.begin()+mid,s.end(),greater<char>());
        }else{
            sort(s.begin(),s.end()-mid-1);
            sort(s.begin()+mid+1,s.end(),greater<char>());
        }
        return s;
    }
};