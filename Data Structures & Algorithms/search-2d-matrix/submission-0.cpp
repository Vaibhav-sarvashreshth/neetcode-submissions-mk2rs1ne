class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        /*
        note : here, the indexes are written like index = C*i + j ;
        where C is its number of columnes and i and j are its x,y indxes
        so to convert this index back to x and y is , we do : 
        index/C ===x and indeex%C == y
        */
        int r = matrix.size();
        int c = matrix[0].size();

        int low = 0;
        int high = r*c -1 ;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int row = mid/c;
            int col = mid%c;
            if(matrix[row][col] ==target)
            {
                return true;
            }
            else if(matrix[row][col] >target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return false;
        
    }
};
