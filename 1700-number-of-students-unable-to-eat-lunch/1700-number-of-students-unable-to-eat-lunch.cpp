class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ones = 0,zeros = 0;
        int i=0;

        for(int i=0;i<students.size();i++){
            if(students[i]==0){
                zeros++;
            }else{
                ones++;
            }
        }
        // cout<<ones<<" "<<zeros;
        while(i<students.size()){
            if(sandwiches[i]==0 && zeros>0){
                zeros--;
                i++;
            }else if(sandwiches[i]==1 && ones>0){
                ones--;
                i++;
            }else{
                break;
            }
        }

        // cout<<ones<<" "<<zeros<<" "<<i;
        int ans = zeros + ones;
        return ans;
    }
};