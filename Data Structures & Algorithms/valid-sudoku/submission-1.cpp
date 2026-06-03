class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0; row<9; row++){
            vector<bool> seen(10, false);
            for(int i=0; i<9; i++){
                if(board[row][i] == '.')continue;
                if(seen[board[row][i]-'0'])
                return false;

            seen[board[row][i]-'0']=true;
            }
        }

        for(int col=0; col<9; col++){
            vector<bool> seen(10, false);
            for(int i=0; i<9; i++){
                if(board[i][col] == '.')continue;
                if(seen[board[i][col]-'0'])
                return false;

            seen[board[i][col]-'0']=true;
            }
        }

        for(int square=0; square<9; square++){
            vector<bool> seen(10,false);
            for(int i=0; i<3;i++){
                for(int j=0; j<3; j++){
                    int row = (square / 3)* 3 + i;
                    int col = (square % 3)* 3 + j;

                    if(board[row][col] == '.')continue;
                    if(seen[board[row][col]-'0'])
                    return false;

                seen[board[row][col]-'0']=true;
                }
            }
        }

        return true;
    }
};
