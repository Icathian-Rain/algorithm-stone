/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> sum(m, vector<int>(n));
        sum[0][0] = grid[0][0];
        for(int i = 1; i<m; i++)
        {
            sum[i][0] = sum[i-1][0] + grid[i][0];
        }        
        for(int j = 1; j<n; j++)
        {
            sum[0][j] = sum[0][j-1] + grid[0][j];
        }
        for(int i = 1; i<m; i++)
        {
            for(int j = 1; j<n; j++)
            {
                sum[i][j] = min(sum[i-1][j], sum[i][j-1]) + grid[i][j];
            }
        }
        return sum[m-1][n-1];    
    }
};
// @lc code=end

