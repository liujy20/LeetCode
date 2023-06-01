# 遍历获得数组和
# 通过prev获得左边的和
# 如果i的左边等于右边则i是中心索引
a=[1,2,5,4,6,2]
# a = [1, 2, 3]
sum=0
prev=0
# 获得数组和
for i in a:
    sum+=i

for i,value in enumerate(a):
#     左右和是否相等
    if prev*2==sum-value:
        print(i)
    else:
        prev+=value


