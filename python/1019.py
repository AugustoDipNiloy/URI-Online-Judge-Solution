a=int(input())
b=int(a/60);
s=a-b*60
h=int(b/60)
m=b-h*60;
print('%d:%d:%d'%(h,m,s))
