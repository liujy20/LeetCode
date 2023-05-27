def move(n,a,b,c):#三层汉诺塔,n个环
    if n==1:
        print(a,'-->',c)
    else:
        move(n-1,a,c,b)#将n-1个环从a放在b上
        move(1,a,b,c)#将最下方的环放在c上
        move(n-1,b,a,c)#将b上的环放到c上

move(6,'a','b','c')