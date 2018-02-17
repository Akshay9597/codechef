import itertools
def f(arr):
	sum = 0
	for i in range(len(arr) - 1):
		max = arr[i+1]
		if(arr[i] > arr[i+1]):
			max = arr[i]
		sum += max
	return int(sum)
T = int(input())
for i in range(T):
	n, k = map(int, input().split())
	arr = []
	for j in range(1, n+1):
		arr.append(j)
	l = list(itertools.permutations(arr))
	flag = 0
	for j in l:
		sum = f(j)
		if(k == sum):
			flag = 1
			print(j)
			break
		else:
			continue
	if(flag == 0):
		print('-1')

