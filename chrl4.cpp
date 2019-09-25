#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n ,k, i;
	long long int prod = 1;
	cin >> n >> k;
	int street[n];
	for(i=0;i<n;i++) {
		cin >> street[i];
	}
	
	for(i = n-1; i >= 0;) {
		prod = prod * street[i];
		//cout << "prod:" << prod << endl;
		i = i - k;
		if(i<=0)
			prod = prod * street[0];
	}
	cout << prod % 1000000007;
}
