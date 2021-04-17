import string
a1=[]
a3=[]
a5=[]
for i in string.ascii_lowercase:
    
    a1.append(i)

test=["99a", "78b", "q2345", "11d"]
for i in test:
    for j in i:
      if(j.isalpha()):
        
        a3.append(j)
a4=sorted(a3)
for i in a4:
    for j in test:
        if(i in j):
            
            a5.append(j)
print(a5)


        
        


        
        