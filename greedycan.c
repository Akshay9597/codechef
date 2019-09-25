#include <stdio.h>
#include <stdlib.h>
int main() {
	int T, N, M, i, j, k, stu, count, flag, index;
	long *minSalary, *offeredSalary, *maxJobOffers, totalSalary, *givenJob, max;
	char *str, **qual; 
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		count = 0;	//no. of companies give Job.
		totalSalary = 0;
		stu = 0; // No. of stu geting job.
		scanf("%d%d", &N, &M);
		if(N == 0 || M == 0) {
			printf("%d %li %d\n", stu, totalSalary, M - count);
			continue;
		}
		str = (char *)malloc(sizeof(char) * M);
		minSalary = (long *)malloc(sizeof(long) * N);
		offeredSalary = (long *)malloc(sizeof(long) * M);
		maxJobOffers = (long *)malloc(sizeof(long) * M);
		givenJob= (long *)malloc(sizeof(long) * M);	//To count jobs given during evaluation.
		for(j = 0; j < N; j++)
			givenJob[j] = 0;
		qual = (char **)malloc(sizeof(char *) * N);
		for(j = 0; j < N; j++)
			qual[j] = (char *)malloc(sizeof(char) * M);
		for(j = 0; j < N; j++)
			scanf("%li", &minSalary[j]);
		for(j = 0; j < M; j++)
			scanf("%li%li", &offeredSalary[j], &maxJobOffers[j]);
		for(j = 0; j < N; j++) {
			scanf("%s", str);
			for(k = 0; k < M; k++) {
				qual[j][k] = str[k];
			}
		}
		
		for(j = 0; j < N; j++) { //Candidate
			flag = 0;
			max = 0;
			for(k = 0; k < M; k++) {
				if(qual[j][k] == '1') {
					if(offeredSalary[k] > max && offeredSalary[k] >= minSalary[j] && givenJob[k] < maxJobOffers[k]){
						max = offeredSalary[k];
						flag = 1;
						index = k;
					}
				}
			}
			if(flag) {
				totalSalary = totalSalary + max;
				givenJob[index]++;
				stu++;
			}
		}
		for(j = 0; j < M; j++) {
			if(givenJob[j])
				count++;
		}
		printf("%d %li %d\n", stu, totalSalary, M - count);
		for(j = 0; j < N; j++)
			free(qual[j]);
		free(qual);
		free(str);
		free(minSalary);
		free(offeredSalary);
		free(maxJobOffers);
		free(givenJob);
	}
	return 0;
}
