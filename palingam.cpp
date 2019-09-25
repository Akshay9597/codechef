#include <iostream>
#include <new>
using namespace std;
int issubset(string a, string b) {	//return 1 if b is a subset of a else 0;
	int la, lb, i, j, count = 0;
	la = a.length();
	lb = b.length();
	for(i = 0; i < lb; i++) {
		for(j = 0; j < la; j++) {
			if(b[j] == a[i]) {
				count++;
				break;
			}
	}
	if(count == lb)
		return 1;
	else
		return 0;
	
}
int main() {
	int T, i, k, tmp, flag, j, count;
	string s, t;
	cin >> T;
	for(i = 0; i < T; i++) {
		cin >> s >> t;
		//If t is subset of s then A wins.
		if(issubset(s,t)) {
			if(issubset(t,s))
		}	
	}
	return 0;
}
