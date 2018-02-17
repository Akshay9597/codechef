t = int(input())
for i in range(t):
    a, b, c, d = map(int, input().split())
    if(a !=b and a != c and a != d):
    	print('NO')
    	continue
    if(a == b):
    	if(c != d):
    		print('NO')
    		continue
    if(a == c):
    	if(b != d):
    		print('NO')
    		continue
    if(a == d):
    	if(b != c):
    		print('NO')
    		continue
    print('YES')
   
