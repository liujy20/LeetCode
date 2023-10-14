def all(li,n):
  allnum=0
  for i in range(n):
    allnum+=li[i]

  maxnum=allnum

  for i in range(1,len(li)+1-n):
    onnum=allnum-li[i-1]+li[i+n-1]
    allnum=onnum
    if allnum>maxnum:
      maxnum=allnum 
  return maxnum

if __name__=='__main__':
  li=[int(i) for i in input().split(',')]
  n=int(input().strip())
  # print(li,n)
  print(all(li,n))