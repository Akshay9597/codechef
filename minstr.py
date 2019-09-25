t = int(input())
for i in range(t):
	n = int(input())
	s = input().split()
	ab = ba = a = b = 0
	for j in s:
		if(j == "ab"):
			ab += 1
		elif(j == "ba"):
			ba += 1
		elif(j == 'a' or j == 'aa'):
			a += 1
		else:
			b += 1
	if(ba == 0 and ab == 0):
		if(not b):
			print('1')
		elif(not a):
			print('1')
		else:
			print('2')
	else:
		if(ba > ab):
			print(ba * 2)
		elif(ab > ba):
			print(ab * 2)
		else:
			print(ab * 2 + 1)
