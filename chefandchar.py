t = int(input())
for i in range(t):
	chef = set(('c','h','e','f'))
	s = input()
	l = len(s)
	if l < 4:
		print("normal")
		continue
	j = 0
	k = 4
	count = 0
	check = []
	for t in range(4):
		check.append(s[t])
		if set(check) == chef:
			count += 1
	for j in range(l-4):		
		check.remove(s[j])
		check.append(s[k])
		if set(check) == chef:
			count += 1
		k+=1
	if count > 0:
		print("lovely",count)
	else:
		print("normal")
