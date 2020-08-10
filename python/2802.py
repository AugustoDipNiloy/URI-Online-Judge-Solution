a=int(input())
if a<=4:
    print(2**(a-1))
else:
    print(int(1+((a*(a-1))/2)+((a*(a-1)*(a-2)*(a-3))/24)))
