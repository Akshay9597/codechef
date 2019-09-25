#include <stdio.h>
#include <stdlib.h>
int main() {
	int T, N, i, j, D, flag;
	long long *a, sum, avg, count, diff;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		sum = 0;
		count = 0;
		flag = 0;
		scanf("%d%d", &N, &D);
		if(D > N)
			break;
		a = (long long *) malloc (sizeof(long long) * N);
		for(j = 0; j < N; j++) {
			scanf("%lli", &a[j]);
			sum = sum + a[j];
		}
		//Should be divisible. So we can get a common no.
		if(sum % N) {
			printf("-1\n");
			continue;
		}
		avg = sum / N;
	//	cout << "avg" << avg << endl;
	/*	for(j = 0; j < N - D; j++) {
			if(a[j] > avg) {
				if(a[j + D] >= avg)
					continue;
				else {
					while(1) {
//					while(a[j] <= avg && a[j + D] >= avg) {
						if(a[j] == avg || a[j + D] == avg)
							break;
						a[j]--;
						a[j + D]++;
					//	cout << "index" << j << " " << j + D << endl;
					//	cout << a[j] << " " << a[j + D] << endl;
						count++;
					}


				}
			}
			else if(a[j] < avg) {
				if(a[j + D] <= avg)
					continue;
				else {
					while(1) {
						if(a[j] == avg || a[j + D] == avg)
							break;
						a[j]++;
						a[j + D]--;
					//	cout << "index" << j << " " << j + D << endl;
					//	cout << a[j] << " " << a[j + D] << endl;
						count++;
					}
				}
			}
			else
				continue;

		}	*/

		for(j = 0; j < N - D; j++) {
			if(a[j] > avg) {
				diff = a[j] - avg;
				a[j] = avg;
				count = count + diff;
				a[j + D] = a[j + D] + diff;
			//	printf("%d , %d :%lli %lli\n", j, j+D, a[j], a[j + D]);	
			}
			else if(a[j] < avg) {
				diff = avg - a[j];
				a[j] = avg;
				count = count + diff;
				a[j + D] = a[j + D] - diff;
			//	printf("%d , %d :%lli %lli\n", j, j+D, a[j], a[j + D]);	
			}
			else
				continue;

		}

/*		for(j = 0; j < N; j++)
			printf("%lli ", a[j]);	*/

		for(j = 0; j < N; j++) {
			if(a[j] != avg) {
				flag = 1;
				break;
			}
		}

		if(flag)
			printf("-1\n");
		else
			printf("%lli\n", count);


	}
	return 0;
}
