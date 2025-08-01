2))
class Solution {
public:
    void input(){
    int m, n, x;
    cin>>m>>n;
    vector<vector<int>> grid(m, vector<int>(n, 0));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
          {
              cin>>x;
              grid[i][j]=x;
          }
    }
}
              
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<vector<int>> trans(n, vector<int>(m, 0));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                trans[j][i]=matrix[i][j];
            }
        }
        return trans;
    }
};
