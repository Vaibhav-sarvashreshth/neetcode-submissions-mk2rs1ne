class Solution {
public:

    int m , n;
    vector<vector<int>> dirs = {{1, 0} , {-1 , 0} , {0,-1} , {0,1}};


    void dfs(int r , int c , vector<vector<int>>& heights , vector<vector<bool>>& vis)
    {
        vis[r][c]=true;
        for(auto &d : dirs)
        {

            int nr = r + d[0] ;
            int nc = c + d[1];
            if(nr < 0 or nc <0 or nr >=m or nc >=n)
            {
                continue;
            }
            if(vis[nr][nc])
            {
                continue;
            }
            else
            {
                if(heights[nr][nc]>=heights[r][c])
                {
                    dfs(nr , nc , heights, vis);
                }
            }

        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)
    {
        m = heights.size();
        n = heights[0].size();


        vector<vector<bool>> pacific(m , vector<bool>( n , false));
        vector<vector<bool>> atlantic(m , vector<bool>( n , false));


        // for pacific left column and first row

        for(int i=0;i<m;i++)
        {
            dfs(i , 0 , heights, pacific);
        }
        for(int i=0;i<n;i++)
        {
            dfs(0 , i , heights, pacific );
        }
        for(int i=0;i<m;i++)
        {
            dfs(i , n-1 , heights, atlantic);
        }
        for(int i=0;i<n;i++)
        {
            dfs(m-1 , i , heights, atlantic);
        }


        vector<vector<int>>res;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pacific[i][j] and atlantic[i][j])
                {
                    res.push_back({i,j});
                }
            }
        }
        return res;
                
    }
};
