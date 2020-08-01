a=int(input())
print('%d'%(a))
print('%d nota(s) de R$ 100,00'%(a/100))
a%=100
print('%d nota(s) de R$ 50,00'%(a/50))
a%=50
print('%d nota(s) de R$ 20,00'%(a/20))
a%=20
print('%d nota(s) de R$ 10,00'%(a/10))
a%=10
print('%d nota(s) de R$ 5,00'%(a/5))
a%=5
print('%d nota(s) de R$ 2,00'%(a/2))
a%=2
print('%d nota(s) de R$ 1,00'%(a/1))
