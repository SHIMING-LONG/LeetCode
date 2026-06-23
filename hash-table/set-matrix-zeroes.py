class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        first_row_zero=False
        first_col_zero=False
        m=len(matrix)
        n=len(matrix[0])
         # 检查第一行是否有0
        for j in range(n):
            if matrix[0][j]==0:
                first_row_zero=True
                break
        # 检查第一列是否有0
        for i in range(m):
            if matrix[i][0]==0:
                first_col_zero=True
                break
        for i in range(1,m):
            for j in range(1,n):
                if matrix[i][j]==0:
                    matrix[i][0]=0 
                    # 把第 i 行的第一个元素（第一列）设为 0
                    matrix[0][j]=0
                    # 把第 j 列的第一个元素（第一行）设为 0
        for i in range(1,m):
            for j in range(1,n):
                if matrix[i][0]==0 or matrix[0][j]==0:
                    matrix[i][j]=0
        if first_row_zero:
            for j in range(n):
                matrix[0][j]=0
        if first_col_zero:
            for i in range(m):
                matrix[i][0]=0
        return matrix
