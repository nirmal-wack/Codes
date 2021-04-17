j=1
a1=[1,2,1,2,1]
a2=[1,2,1,2,3]
a3=max(a1)
a4=max(a2)
q=sorted(a1)
q1=sorted(a2)
p=q[::-1]
p1=q1[::-1]
w=sorted(a2)
for i in p:
    if(i!=a3):
        l=i
        break
for i in p1:
    if(i!=a4):
        y1=i
        break


if(l+(a3*10)>y1+(a4*10)):
    print("winner")
else:
    print("loser")