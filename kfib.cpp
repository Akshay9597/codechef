#include <stdio.h>
#include <iostream>
using namespace std;
/*
long long s(int, int);
long long t(int n, int k) {
        if(n <= k)
                return 1;
        else
                return s(n-1,k);
}

long long s(int n, int k) {
	int i;
	long long sum = 0;
	for(i = n-1; i >= n-k; i--) {
		sum = sum + t(i,k); 
	}
	return sum;
}
*/
long long s(int n, int k) {
	int i;
	if(n <= k)
		return 1;
	long long a[n];
	for(i = 1; i < n; i++) {
		a[i+]
	}
int main() {
	int n, k;
	cin >> n >> k;
	cout << (s(n,k) % 1000000007)<< endl;
	return 0;
}
