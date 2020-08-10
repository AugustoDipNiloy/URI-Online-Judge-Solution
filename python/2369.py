n=int(input())
n-=10
an=7
if n>0:
    if n>20:
        an+=20
    else:
        an+=n
    n-=20
if n>0:
    if n>70:
        an+=140
    else:
        an+=n*2
    n-=70
if n>0:
    an+=n*5;
print(an)
