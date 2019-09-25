t = int(input())
for i in range(t):
	n, b, m = input().split()
	n = int(n)
	b = int(b)
	m = int(m)
	time = 0
	rem = n
	while(rem):
		if(rem % 2 == 0):
			tmp = rem / 2
		else:
		 	tmp = (rem + 1) / 2
		time = time + m * tmp
		time += b
		m *= 2
		rem = rem - tmp
	time = time - b
	print(int(time))


