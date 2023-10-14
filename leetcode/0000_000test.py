def findNumberIn2DArray(matrix, target: int) -> bool:
    i, j = len(matrix)-1, 0
    # 对于a=[]的情况,i>=0可以直接中断判断,不会导致越界
    while i >= 0 and j < len(matrix[0]):
        if matrix[i][j] > target:
            i -= 1
        elif matrix[i][j] < target:
            j += 1
        else:
            return True
    return False

a=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
print(findNumberIn2DArray(a,4))