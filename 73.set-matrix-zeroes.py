#
# @lc app=leetcode id=73 lang=python
#
# [73] Set Matrix Zeroes
#

# @lc code=start
class Solution(object):
   def setZeroes(matrix):
    # find the rows and columns that contain zeros
    rows = set()
    columns = set()
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == 0:
                rows.add(i)
                columns.add(j)
    
    # set the entire row and column to zeros
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if i in rows or j in columns:
                matrix[i][j] = 0
    
    # return the modified matrix
    return matrix

# test the function with the given input
matrix = [[1,1,1],[1,0,1],[1,1,1]]
print("Input:", matrix)
print("Output:", setZeroes(matrix))

        
# @lc code=end

