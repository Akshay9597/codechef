#include <stdio.h>
#include <stdlib.h>
int main() {
	int T, minX, maxX, N, i, j, k, spammer, nonspammer, sum1, sum2;
	scanf("%d",&T);
	for(i=0;i<T;i++) {
		spammer = 0;
		nonspammer = 0;
		scanf("%d %d %d", &N, &minX, &maxX);
		int * w, * b;
		w = (int *)malloc(sizeof(int) * N);
		b = (int *)malloc(sizeof(int) * N);
		for(j=0;j<N;j++) {
			scanf("%d %d", &w[j], &b[j]);
		}

		sum1 = minX;
		sum2 = minX+1;
		for(k=0;k<N;k++) {
				sum1 = sum1 * w[k] + b[k];
				sum2 = sum2 * w[k] + b[k];
			}
		if(sum1 % 2 == 0)
			nonspammer++;
		else
			spammer++;
		
		j = minX;
		
		printf("%d %d\n",nonspammer,spammer);
	}
	return 0;
}
