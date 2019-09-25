#include<stdio.h>
#include<iostream>
using namespace std;


void calScore(int *a, int *b, int *c, int n) {
	int i;
	for(i=0;i<n;i++)
		c[i] = 20*a[i] - (10 * b[i]);
}

int findmax(int *c, int n) {
	int i = 0;
	int maxScore = c[i];
	for(i=1;i<n;i++) {
		if(maxScore < c[i])
			maxScore = c[i];
	}
	return maxScore;
}
int main() {
	int i, t,n,j;
	int a[256], b[256], c[256];
	int maxScore;
	cin >> t;
	for(i=0;i<t;i++) {
		cin >> n;
		for(j = 0; j < n; j++) {
			cin>>a[j];
		}
		for(j = 0; j < n; j++) {
			cin>>b[j];
		}
		calScore(a,b, c, n);
		maxScore = findmax(c,n);
		if (maxScore < 0)
			cout << "0" << endl;
		else
			cout <<  maxScore << endl;
	}
}
