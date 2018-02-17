#include <stdio.h>
#include <stdlib.h>
int main() {
	int T, N, i, j, *a, tmp, flag, flag7;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		tmp = 1;
		flag = 0;
		flag7 = 0;
		a = (int *) malloc (sizeof(int) * N);
		for(j = 0; j < N; j++) {
			scanf("%d", &a[j]);
		}
		for(j = 0; j <= N / 2; j++) {
			if(a[j] == a[N - 1 - j]) {
				if(a[j] == tmp) {
					if(tmp == 7) {
						tmp--;
						flag7 = 1;
					}
					continue;
				}
				else if(a[j] == tmp + 1) {
					tmp++;
					if(tmp == 7) {
						flag7 = 1;
						tmp--;
					}
					continue;
				}
				else {
					flag = 1;
					break;
				}
			}
			else {
				flag = 1;
				break;
			}
		}
		if(flag == 0 && flag7 == 1)
			printf("yes\n");
		else
			printf("no\n");

	}
	return 0;
}
