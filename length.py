t=int(input("enter a value of t"))
list=[]
for i in range(0,t):
    str=input("enter a string\n")
    list.append(str)
for each in list:
    l=each.split(' ')
length=len(l[-1])
print("length is",length)

    
    

