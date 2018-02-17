def maxn(n):
	sum = n * (n + 1) / 2
	return sum * 2
def minn(n):
	sum = (n/2) * ((n / 2)+1) / 2
	return sum * 2

T = int(input())
for i in range(T):
	n, k = map(int, input().split())
	minsum = minn(n)
	maxsum = maxn(n) - minsum
	print(minsum, maxsum)
	if(k > maxsum and k < minsum):
		print('-1')
		continue
	arr = []
	used = []
	unused = []
	for j in range(n, 2, -1):
		arr.append(j)
		arr.append(j)
	arr.append(2)
	print(arr)
	p = 0
	flag = 0
	while(1):
		sum = 0
 		for j in range(p, len(arr)):
			if(sum > k):
				break
			sum += arr[j]
			if(arr[j] not in used):
				used.append(arr[j])
			if(sum == k):
				flag = 1
				break
		if(flag == 1 or j >= n):
			break
		p += 1
		del used[]
	if(not flag):
		continue
	p = 1
	used.sort()
	for j in used:
		if(p not in used):
			unused.append(p)
		p+=1
	usedindex = 0
	unusedindex = 0
	
