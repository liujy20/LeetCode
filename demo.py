# a=list(range(1,10))
# print(a)
# s='hello world'
# new=s.find('e')
# print(s,new)
# for i in range(3):
#     print(i)

# 函数
# def sqrt(n):
#     root=n/2
#     for i in range(20):
#         root=1/2*(root+n/root)
#     return root
# print(sqrt(81))

# for
# sum=0
# for i in range(101):
#     sum+=i
# print(sum)

# def calc(*num):#可变参数
#     sum=0
#     for i in num:
#         sum+=i
#     return sum
# a=(1,2,3)
# print(calc(*a))#元组传入
# print(calc(1,2,3,4,5))

# def a(a,b,**c):#关键字参数允许你传入0个或任意个含参数名的参数
#     print(a,b,c)
# a(1,2,aa=123,bb=321)

# def fact(n):
#     if n==1:
#         return 1
#     return fact(n-1)+n
# 
# print(fact(100))

# 空格去除
# def trim(s):
#     start=0
#     end=len(s)
#     while start<end and s[start]==' ':
#         start+=1
#     while start<end and s[end-1]==' ':
#         end-=1
#     return s[start:end],start,end
# print(trim('  aac '))

l1=['Hello', 'World', 18, 'Apple', None]
l2=[x.lower() for x in l1 if isinstance(x,str)]
print(l2)
