t = int(input())
for i in range(t):
	n,m = map(int,input().split())
	sum = 0
	for j in range(1,n+1):
		sum = sum + (j ** j)%m
	sum = sum % m
	print(sum)
