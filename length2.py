import sys
t=int(sys.stdin.readline())
list1=[]
for i in range(0,t):
    str1=sys.stdin.readline().rstrip('\n')
    #print('\n')
    list1.append(str1)
list2=[]
for index in range(0,len(list1)):
    l=list1[index].split(' ')
    length=len(l[-1])
    print(length)
    


