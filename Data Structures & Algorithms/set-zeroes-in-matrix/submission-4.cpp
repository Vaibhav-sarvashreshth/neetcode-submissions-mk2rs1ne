class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
         int IsrowZero = 0;
        int IscolZero = 0;

        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[0][i]==0)
            {
                IsrowZero=1;
            }
        }

        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]==0)
            {
                if(IsrowZero==1 or IsrowZero==3)
                {
                    IsrowZero=3;

                }
                else
                {
                    IsrowZero=2;
                }
                
            }
        }

        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        
        
        for(int i=1;i<matrix[0].size();i++)
        {
            if(matrix[0][i]==0)
                {
                    for(int j=1;j<matrix.size();j++)
                    {

                        matrix[j][i]=0;
                        
                    }
                }
            
        }

        for(int i=1;i<matrix.size();i++)
        {
            if(matrix[i][0]==0)
                {
                    for(int j=1;j<matrix[0].size();j++)
                    {

                        matrix[i][j]=0;
                        
                    }
                }
            
        }

        if(IsrowZero ==1 or IsrowZero==3)
        {
            for(int i=0;i<matrix[0].size();i++)
        {
            matrix[0][i]=0;
        }
        }


        if(IsrowZero ==3 or IsrowZero==2 )
        {
            for(int i=0;i<matrix.size();i++)
        {
            
            matrix[i][0]=0;
        }

        }
        
        

        
    }
};
