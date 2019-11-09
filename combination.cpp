/***********************/
/** This is C++ code. **/
/**   Comb  Example   **/
/***********************/

#include <iostream>
using namespace std;
bool next_comb(int* comb, const int n, const int k) {
	int i = k - 1;
	const int e = n - k;
	do
		comb[i]++;
	while (comb[i] > e + i && i--);
	if (comb[0] > e)
		return 0;
	while (++i < k)
		comb[i] = comb[i - 1] + 1;
	return 1;
}
int main() {
	int n, k;
	cout << "comb(n,k):" << endl;
	cin >> n >> k;
	if (n < k || k <= 0)
		return 0;
	int* comb = new int[k];
	for (int i = 0; i < k; i++)
		comb[i] = i;
	do
		for (int i = 0; i < k; cout << ((++i < k) ? ',' : '\n'))
			cout << comb[i] + 1;
	while (next_comb(comb, n, k));
	delete[] comb;
	return 0;
}
