t = int(input())
for i in range(t):
	d = {}
	s = input()
	if(s.islower() and s.isalpha()):
		l = list(s)
		flag = 0
		for j in l:
			if(j in d):
				d[j] = d[j]+1
			else:
				d[j] = 1
		l = []
		for j in d:
			l.append(d[j])
		l.sort()
		len_list = len(l)
		if(len_list < 3):
			print("Dynamic")
			continue
		for j in range(len_list):
			for k in range(j+1,len_list):
				tmp = l[j] + l[k]
				if(tmp in l):
					flag = 1
					break
				else:
					continue
		if(flag==1):
			print("Dynamic")
		else:
			print("Not")
	else:
		print("Not")
	
	
