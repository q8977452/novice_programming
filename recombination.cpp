/***********************/
/** This is C++ code. **/
/**  ReComb  Example  **/
/***********************/

#include <iostream>
using namespace std;
bool next_re_comb(int* recomb, const int n, const int k) {
	int i = k - 1;
	do
		recomb[i]++;
	while (recomb[i] > n - 1 && i--);
	if (recomb[0] > n - 1)
		return 0;
	while (++i < k)
		recomb[i] = recomb[i - 1];
	return 1;
}
int main() {
	int n, k;
	cout << "recomb(n,k):" << endl;
	cin >> n >> k;
	if (n <= 0 || k <= 0)
		return 0;
	int* recomb = new int[k];
	for (int i = 0; i < k; i++)
		recomb[i] = 0;
	do
		for (int i = 0; i < k; cout << ((++i < k) ? ',' : '\n'))
			cout << recomb[i] + 1;
	while (next_re_comb(recomb, n, k));
	delete[] recomb;
	return 0;
}
