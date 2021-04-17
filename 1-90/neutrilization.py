

    


j=0

a1="+-+-+-+-"
a2="+--++---"
while j<len(a1):
    
    f_n=a1[j]
    s_n=a2[j]
    
    if(f_n=="+" and s_n=="-"):
        print("0",end="")
    elif(f_n=="+" and s_n=="+"):
        print("+",end="")
    elif(f_n=="-" and s_n=="+"):
        print("0",end="")
    elif(f_n=="-" and s_n=="-"):
        print("-",end="")

    j=j+1
print("\n")
    



    