import math
a,b=input().split(" ")
a=float(a)
b=float(b)
c,d=input().split(" ")
c=float(c)
d=float(d)
print("{:.4f}".format(math.sqrt((c-a)*(c-a)+(d-b)*(d-b))))
