#include <bits/stdc++.h>
using namespace std;
int arr[104], A, b, c, d, e, sum;

int main() {
	
	cin >> A >> b >> c;
	for (int i = 0; i < 3; i++) {
		cin >> d >> e;
		for (int j = d; j < e; j++){
			arr[j]++;
		}
	}
	for(int i = 1; i < 100; i++) {
		if (arr[i] == 1) sum += 1 * A;
		else if (arr[i] == 2) sum += 2 * b;
		else if (arr[i] == 3) sum += 3 * c;
	}	
	cout << sum << '\n';
	
	return 0;
}