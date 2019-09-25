t = int(input())
n,m,k = map(int,input().split())
a = list(map(int,input().split()))
length = len(a)
j = 0
while(j < length):
	if(a[j] > k or a[j] == -1):
		i = input()
		l,r = map(int,input().split)
		if(i == 'I'):

