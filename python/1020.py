a=int(input())
print('%d ano(s)'%(a/365))
a%=365
print('%d mes(es)'%(a/30))
a%=30
print('%d dia(s)'%(a))
