#include <iostream>
using namespace std;
int main() {
	long long i, n, k, prod;
	long long *a;
	cin >> n >> k;
	a = (long long *) malloc(sizeof(int) * n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	prod = 1;
	for(i = n-1; i >= 0; i -= k) {
		prod = prod * a[i];
	}
	if(i != 0)
		prod = prod * a[0];
	prod = prod % 1000000007;
	cout << prod << endl;
	return 0;
}
