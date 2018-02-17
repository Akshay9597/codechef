def permutation(flag, k =1 ):
    N = len(flag)
    for i in xrange(0, N):
        if flag[i] != 0:
            continue
        flag[i] = k 
        if k == N:
            print flag
        permutation(flag, k+1)
        flag[i] = 0

permutation([0, 0, 0, 0])
