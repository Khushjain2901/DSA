class Solution {
public:

     bool isSafe(vector<string> &board,int row,int col,int n){
        // Horizontal
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q') return false;
        }
        // Vertical
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
        }
        // left diagonal
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        // right diagonal
        for(int i=row,j=col;i>=0&&j<n;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void nQueens(vector<string> &board,int row,int n,int &ans){

        if(row==n){
            ans=ans+1;
            return;
        }
         for(int j=0;j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j]='Q';
                nQueens(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
    }

    int totalNQueens(int n) {

        vector<string>board(n,string(n,'.'));
            int ans=0;
            int row=0;
            nQueens(board,row,n,ans);
            return ans;
    

    }
};