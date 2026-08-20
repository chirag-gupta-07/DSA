class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size()-1;
        int m1=0;
        int m2=matrix.size()-1;
        int mid1=(m1+m2)/2;
        int n1=0;
        int n2=matrix[0].size()-1;
        int mid2=(n1+n2)/2;

        while(m1<=m2){
            mid1=(m1+m2)/2;
            if(matrix[mid1][0]<=target && matrix[mid1][n]>=target){
                while(n1<=n2){
                    mid2=(n1+n2)/2;
                    if(matrix[mid1][mid2]==target){
                        return true;
                    }else if(matrix[mid1][mid2]>target){
                        n2=mid2-1;
                    }else if(matrix[mid1][mid2]<target){
                        n1=mid2+1;
                    }else{
                        return false;
                    }

                }
                return false;
            }else if(matrix[mid1][0]>target){
                m2=mid1-1;
            }else if(matrix[mid1][n]<target){
                m1=mid1+1;
            }else{
                return false;
            }
        }

        return false;
    }
};