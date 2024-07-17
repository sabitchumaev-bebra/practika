//Caaaiea ?60
#include <iostream>
#include <locale.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	string s = "", str = "";
	int k1 = 1, k = 0, n = 0, nf = 1;
	while (1) {
		cout << "Aaaaeoa cia?aiea n (eiee?anoai yeaiaioia aey ia?anoaiiaee n!(1 <= n <= 9)): ";
		cin >> n;
		if (n >= 1 && n <= 9)
			break;
		else
			cout << "Eaii?e?iaaiu ia?aie?aiey! Iiaoi?eoa au? ?ac!" << endl;
	}
	for (int i = 1; i < n + 1; i++) {
		str = to_string(i);
		s.append(str);
		nf *= i;
	}
	while (1) {
		cout << "Aaaaeoa cia?aiea k (iiia? ia?anoaiiaee(1 <= k <= n!)): ";
		cin >> k;
		if (k >= 1 && k <= nf)
			break;
		else
			cout << "Ianouanoao?uee iiia? ia?anoaiiaee! Iiaoi?eoa au? ?ac!" << endl;
	}
	do {
		if (k1 == k) {
			cout << s << endl;
			break;
		}
		k1++;
	} while (next_permutation(s.begin(), s.end()));
	system("pause");
}