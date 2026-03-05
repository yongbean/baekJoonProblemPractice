n = int(input())

for i in range(1, n):               # code for upper stars without middle
    print(" "*(n-i) + "*"*(2*i-1))
for i in range(n, 0, -1):           # code for lower stars with middle
    print(" "*(n-i) + "*"*(2*i-1))