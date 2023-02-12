list=[2, 'helo', 5.2, 9, "hii", 1.2]
slist=[]
ilist=[]
clist=[]
for elem in list:
    if(type(elem)==int):
        ilist.append(elem)
    elif(type(elem)==str):
        slist.append(elem)
    else:
        clist.append(elem)
print(ilist)
print(slist)
print(clist)