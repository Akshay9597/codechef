#include <iostream>
#include <new>
using namespace std;
int main() {
	int T, N, i, j, D, flag;
	long long *a, sum, avg, count;
	cin >> T;
	for(i = 0; i < T; i++) {
		sum = 0;
		count = 0;
		flag = 0;
		cin >> N >> D;
		if(D > N)
			break;
		a = new long long[N];
		for(j = 0; j < N; j++) {
			cin >> a[j];
			sum = sum + a[j];
		}
		//Should be divisible. So we can get a common no.
		if(sum % N) {
			cout << "-1" << endl;
			continue;
		}
		avg = sum / N;
	//	cout << "avg" << avg << endl;
		for(j = 0; j < N - D; j++) {
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

		}

/*		for(j = 0; j < N; j++)
			cout << a[j] << endl;	*/

		for(j = 0; j < N; j++) {
			if(a[j] != avg) {
				flag = 1;
				break;
			}
		}

		if(flag)
			cout << "-1" << endl;
		else
			cout << count << endl;


	}
	return 0;
}
