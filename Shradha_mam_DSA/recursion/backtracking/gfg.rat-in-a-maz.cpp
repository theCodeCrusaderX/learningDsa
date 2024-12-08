
brute approach : 

class Solution {
  public:
  
  void helper(vector<vector<int>> &mat, int row, int col, vector<string> &ans, string path, vector<vector<bool>> &vis) {
      int n = mat.size();
      
      if(row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || vis[row][col] == true) {
          return;
      }
      
      if(row == n-1 && col == n-1) {
          ans.push_back(path);
          return;
      }
      
      vis[row][col] = true;
      
      //up
      helper(mat,row-1,col,ans,path + "U",vis);
      
      //down
      helper(mat,row+1,col,ans,path + "D",vis);
      
      //left
      helper(mat,row,col-1,ans,path + "L",vis);
      
      //right
      helper(mat,row,col+1,ans,path + "R",vis);
      
      vis[row][col] = false;
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        vector<string> ans;  //to store all possible path

        string path = ""; //to store single possible path
        
        vector<vector<bool>> vis(n,vector<bool>(n, false));  //to check if the cell is visited or not 
        
        helper(mat,0,0,ans,path,vis);
        
        return ans;
    }
};



optimal approach :: 
// well we are just removing the extra space to check if the cell is previously visited or not 

class Solution {
  public:
  
  void helper(vector<vector<int>> &mat, int row, int col, vector<string> &ans, string path) {
      int n = mat.size();
      
      if(row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || mat[row][col] == -1) {
          return;
      }
      
      if(row == n-1 && col == n-1) {
          ans.push_back(path);
          return;
      }
      
      mat[row][col] = -1;
      
      //down
      helper(mat,row-1,col,ans,path + "U");
      
      //up
      helper(mat,row+1,col,ans,path + "D");
      
      //left
      helper(mat,row,col-1,ans,path + "L");
      
      //right
      helper(mat,row,col+1,ans,path + "R");
      
      mat[row][col] = 1;
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        vector<string> ans;
        string path = "";
        
        helper(mat,0,0,ans,path);
        
        return ans;
    }
};