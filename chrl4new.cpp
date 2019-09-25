#include <iostream>
using namespace std;
int main() {
	long long i, j, n, k, prod;
	long long *a;
	cin >> n >> k;
	a = (long long *) malloc(sizeof(long long) * n);
	for(i = 0; i < n; i++)
		cin >> a[i];
	prod = 1;
	for(i = n-1; i > 0;) {
		//Take product from last to first. So that minimum large numbers are considered
		prod = prod * a[i];
		cout << "in 1st loop";
		for(j = i - 1; j > 0; j--) {
			if((a[i] - a[j]) > k) {
				//The difference can't be grater than k so the previous number is eligible to
				//be considered in product. That's why j+1
				i = j + 1;
				break;
			}
		}
	}
	if(i != 0)
		prod = prod * a[0];
	prod = prod % 1000000007;
	cout << prod << endl;
	return 0;
}
