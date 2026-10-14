class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int left =0 , right = matrix[0].size()-1; // no of columns
        int top = 0, bottom = matrix.size()-1;// no of rows
        vector<int>ans;
        

        while(ans.size()<(matrix[0].size())*matrix.size())
        {
            for(int i=left;i<=right and  ans.size()<(matrix[0].size())*matrix.size();i++)
            {
                ans.push_back(matrix[top][i]);
               
            }
            top++;
            for(int i=top;i<=bottom and  ans.size()<(matrix[0].size())*matrix.size();i++)
            {
                ans.push_back(matrix[i][right]);
                
            }
            right--;
            for(int i=right;i>=left and  ans.size()<(matrix[0].size())*matrix.size();i--)
            {
                ans.push_back(matrix[bottom][i]);
            }

            bottom--;

            for(int i=bottom;i>=top and  ans.size()<(matrix[0].size())*matrix.size();i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;


        }
        return ans;

        
    }
};
