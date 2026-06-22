class Solution {
public:
bool helper(int i,int j,vector<vector<char>> &board,string word,int idx,int m,int n)
{
    if(idx == word.size())
    return true;
    if(i < 0 || j < 0 || i>=m || j>=n)
    return false;
    if(board[i][j] == '#')
    return false;
    if(board[i][j] != word[idx])
    return false;
    char temp = board[i][j];
    board[i][j] = '#';
    bool f = helper(i+1,j,board,word,idx+1,m,n) ||
    helper(i-1,j,board,word,idx+1,m,n) || helper(i,j+1,board,word,idx+1,m,n) ||
    helper(i,j-1,board,word,idx+1,m,n);
    board[i][j] = temp;
    return f;

}
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i =0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(helper(i,j,board,word,0,m,n))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
