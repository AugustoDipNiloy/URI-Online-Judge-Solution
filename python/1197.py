while True:
        try:
                a,b=map(int,input().split())
                print(2*a*b)
        except EOFError:
                break
