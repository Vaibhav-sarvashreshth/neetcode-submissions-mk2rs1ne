class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        vector<vector<bool>>rows(9 , vector<bool>(9, false));
        vector<vector<bool>>cols(9 , vector<bool>(9, false));
        vector<vector<bool>>boxs(9 , vector<bool>(9, false));
        

        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {

                if(board[r][c]=='.')
                {
                    continue;
                }
                else
                {
                    int digit = board[r][c]-'1';
                    int box = (r/3)*3 + (c/3);

                    if(rows[r][digit] || cols[c][digit] || boxs[box][digit])
                    {
                        return false;

                    }
                    else
                    {
                        rows[r][digit] = true;
                        cols[c][digit] = true;
                        boxs[box][digit] = true;
                    }
                }
            }
        }

        return true;
        
    }
};
