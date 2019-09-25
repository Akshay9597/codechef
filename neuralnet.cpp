#include <iostream>
using namespace std;
int main() {
	int T, minX, maxX, N, i, j, k, spammer, nonspammer, sum;
	cin >> T;
	for(i=0;i<T;i++) {
		cin >> N >> minX >> maxX;
		//cout << N << minX << maxX;
		//int * w = new int[N];
		//int * b = new int[N];
		int * w, * b;
		w = int[N];
		b = int[N];
		if (!w || !b) 
        	cout << "allocation of memory failed\n"; 
		for(j=0;j<N;j++) {
			cout << "in";
			cin >> w[j] >> b[j];
		}
		cout << "out";
		j = minX;
		while(j<=maxX) {
			sum = j;
			for(k=0;k<N;k++) {
				sum = sum * w[k] + b[k];
			}
			if(sum % 2 == 0)
				nonspammer++;
			else
				spammer++;
		}
		cout << spammer << " " << nonspammer<< endl;
	}
	return 0;
}
