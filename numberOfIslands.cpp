//Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.
//Input: grid = [["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]] --> Output: 1

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        function<void(vector<vector<char>>& , int , int)> dfs = [&](vector<vector<char>>& grid , int i , int j){
            if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0'){
                return;
            }
            grid[i][j] = '0';
            dfs(grid , i + 1 , j);
            dfs(grid , i - 1 , j);
            dfs(grid , i , j + 1);
            dfs(grid , i , j - 1);
        };

        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < m ; j++){
                if (grid[i][j] == '1'){
                    count++;
                    dfs(grid , i , j);
                }
            }
        }
        return count;
    }
};

int main (){
    vector<vector<char>> grid = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };

    Solution obj;
    int res = obj.numIslands(grid);
    cout << "result : " << res << endl;

    return 0;
}