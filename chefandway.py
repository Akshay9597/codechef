n,k = map(int,input().split())
a = list(map(int,input().split()))
prod = []
i = n-1
while i>0:
	prod.append(a[i])
	flag = 1
	last = a[i]
	while(flag == 1):
		tmp = last - a[i-1]
		if tmp <= k:
			flag = 1
			if(i == 0):
				break
			i -= 1
		else:
			flag = 0
prod.append(a[0])
minprod = 1
for i in prod:
	minprod = minprod * i
minprod = minprod % 1000000007
print(minprod)
