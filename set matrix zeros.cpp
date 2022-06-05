class Solution {
    private:
    void change(vector<vector<int>>& mat,int i, int j)
    {
        int row=mat.size();
        int col=mat[0].size();
        for(int p=0;p<col;p++)
         if(mat[i][p]!=0)   mat[i][p]=-1000;
        
        for(int q=0;q<row;q++)
         if(mat[q][j]!=0)   mat[q][j]=-1000;
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
         if (matrix.size() == 0) 
                return;
        int row=matrix.size();
        int column=matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(matrix[i][j]==0)
                {
                    change(matrix,i,j);
                }
            }
        }
        
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(matrix[i][j]==-1000)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};
