class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, int val){
        string value=to_string(val);
        for(int i=0;i<board.size();i++){
            if(board[row][i]==value[0]){
                return false;
            }
            if(board[i][col]==value[0]){
                return false;
            }
            
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==value[0]){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& sudo){
        int n=sudo[0].size();
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(sudo[row][col]=='.'){
                    for(int val=1;val<=9;val++){
                        if(isSafe(row,col,sudo,val)){
                            string s= to_string(val);
                            
                            sudo[row][col]=s[0];
                            
                            bool nextsolnpossible= solve(sudo);
                            if(nextsolnpossible){
                                return true;
                            }else{
                                sudo[row][col]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);   
    }
};
