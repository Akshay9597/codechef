#include<stdio.h>
#include <iostream>
using namespace std;
/*
int main() {
	long int t, i, n, j, k, l, e, o;
	long int a[1000000], even[1024], odd[1024];
	cin >> t;
	for(i=0;i<t;i++) {
		cin >> n;
		e = 0;
		o = 0;
		for(j = 0; j < n; j++) {
			cin >> a[j];
			if(a[j] % 2 == 0) {
			//	cout << "in even:" << a[j] << endl;
				even[e++] = j;
			}
			else {
			//	cout << "in odd:" << a[j] << endl;
				odd[o++] = j;
			}
		}
		long int sum = 0;
		for(k = 0; k < e; k++) {
			for(l = 0; l < o; l++) {
				if(even[k] < odd[l])
					sum++;
			}
		}
		cout << sum << endl;
	}
}
*/
int main() {
	long int t, i, n, j, o, pairs;
	long int a[1000000];
	cin >> t;
	for(i=0;i<t;i++) {
		cin >> n;
		o = 0;
		for(j = 0; j < n; j++) {
			cin >> a[j];
			if(a[j] & 1)	//checking odo
				o++;
			
		}
		pairs = 0;
		for(j = 0; j < n; j++) {
			if(a[j] & 1)
				o--;
			else
				pairs += o;
		}
		cout<< pairs << endl;
	}
}









