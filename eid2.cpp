#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*no need of sort
void mysort(int *a, int *c) {
	int i;
	for(i=0;i<2;i++) {
		if(a[i] > a[i+1])
	}
}
*/
void calc(int *a) {
int x, y, z, i;
	x = a[0];
	y = a[1];
	z = a[2];
	//cout << "xyz: "<< x << y << z << endl;
    sort(a, a+3); 
	for(i = 0; i < 3; i++) {
		if(x == a[i]) a[i] = 0;
		else if(y == a[i]) a[i] = 1;
		else if (z == a[i]) a[i] = 2;
	}
}

int match(int * a, int * c) {
	int i;
	calc(a);
	//for(i=0;i<3;i++)
	//	cout << "a:"<< a[i] << endl;
	calc(c);
	//for(i=0;i<3;i++)
	//	cout << "c:"<< c[i] << endl;
	for(i=0;i<3;i++) {
		if(a[i] != c[i])
			return 0;
	}
	return 1;
}
int main() {
	int t, i, j, a[3], c[3];
	cin >> t;
	for(i = 0; i < t; i++) {
		for(j = 0; j < 3; j++)
			cin >> a[j];
		for(j = 0; j < 3; j++)
			cin >> c[j];
		//mysort(a,c);		
		if(match(a,c))
			cout << "FAIR" << endl;
		else
			cout << "NOT FAIR" << endl;
	}
	return 0;
}
