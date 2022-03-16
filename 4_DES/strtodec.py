s="kerjpjohfsnfnlff"
ans=[]
for i in range(0,len(s),2):
    x=ord(s[i])
    y=ord(s[1+i])
    z=y+x*16-1700
    ans.append(z)
print(ans)
