class Solution {
    bool sorted(int newx, int newy, vector<vector<int>>& visited, vector<vector<int>>& mat) 
    { 
    int n = mat.size();
    if (newx >= 0 && newx < n && newy >= 0 && newy < n && visited[newx][newy] == 0 && mat[newx][newy] == 1) 
    { return true; 
        
    } 
    return false; 
        
    }
    void goratgo(vector<vector<int>>& mat, int x, int y, vector<vector<int>>& visited, vector<string>& ans, string temp) 
    { 
    int n = mat.size(); 
    if (x == n - 1 && y == n - 1) 
    { 
      ans.push_back(temp); return; 
    } 
    visited[x][y] = 1; // Down 
    int newx = x + 1; int newy = y; 
    if (sorted(newx, newy, visited, mat)) 
    { 
      temp.push_back('D'); 
      goratgo(mat, newx, newy, visited, ans, temp); 
      temp.pop_back(); 
    } 
    // Left 
    newx = x; newy = y - 1; 
    if(sorted(newx, newy, visited, mat)) 
    { 
    temp.push_back('L'); 
    goratgo(mat, newx, newy, visited, ans, temp); 
    temp.pop_back();
    } 
    // Right
    newx = x; newy = y + 1; 
    if (sorted(newx, newy, visited, mat)) 
    { temp.push_back('R'); 
    goratgo(mat, newx, newy, visited, ans, temp);
    temp.pop_back(); } 
    // Up 
    newx = x - 1; newy = y; 
    if (sorted(newx, newy, visited, mat)) 
    { temp.push_back('U'); 
    goratgo(mat, newx, newy, visited, ans, temp); 
    temp.pop_back(); } 
    visited[x][y] = 0;
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        vector<vector<int>> visited(n, vector<int>(n, 0)); // to make all its element =0
        int x=0,y=0;
        vector<string> ans;
        if(mat[x][y]==0){
            return ans;
        }
        string temp;
        goratgo(mat,x,y,visited,ans,temp);
        sort(ans.begin(),ans.end());  
        return ans;
    }
};
