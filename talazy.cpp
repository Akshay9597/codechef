#include <iostream>
using namespace std;
int main() {
	int t, i;
	long n, b, m, timet, rem, tmp;
	cin >> t;
	for(i = 0; i < t; i++) {
		cin >> n >> b >> m;
		rem = n;
		timet = 0;
		while(rem) {
			if(rem % 2 == 0)
				tmp = rem / 2;
			else
			 	tmp = (rem + 1) / 2;
			timet = timet + m * tmp;
			timet += b;
			m *= 2;
			rem = rem - tmp;
		}
	timet = timet - b;
	cout << timet << endl;
	}
	return 0;
}


