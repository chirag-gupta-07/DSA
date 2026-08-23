class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i=0;i<n;i++){
            int j=i+1;
            if(j%3==0 && j%5==0){
                ans.push_back("FizzBuzz");
            }else if(j%3==0){
                ans.push_back("Fizz");
            }else if(j%5==0){
                ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(j));
            }
        }
        return ans;
    }
};