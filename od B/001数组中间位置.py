def find_center_index(nums):
  # 只有一个
  if len(nums)==1:
    return 0
    
  n=len(nums)
  left=[1]*n
  right=[1]*n

  # 左边的结果
  for i in range(1,n):
    left[i]=left[i-1]*nums[i-1]
  # 右边的结果
  for i in range(n-2,-1,-1):
    right[i]=right[i+1]*nums[i+1]

  # 比较
  for i in range(n):
    if right[i]==left[i]:
      return i


nums = [ int(x) for x in input().split()]
index = find_center_index(nums)
print(index)


