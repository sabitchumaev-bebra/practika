//Caaaiea ?46
#include <iostream>
#include <locale.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	vector <int> s;
	vector<vector<int>> s1;
	int n = 0, k = 1, c = 0;

	while (1) {
		cout << "Aaaaeoa eiee?anoai yeaiaioia(1<= n <=6): ";
		cin >> n;
		if (n >= 1 && n <= 6)
			break;
		else
			cout << "Eaii?e?iaaiu ia?aie?aiey! Iiaoi?eoa au? ?ac!" << endl;
	}
	bool f = 0;
	cout << "Aaaaeoa " << n << " cia?aiee (io -10 ai 10): " << endl;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (i != 0)
			f = find(s.begin(), s.end(), c) != s.end();
		if (c <= 10 && c >= -10 && f != 1)
			s.push_back(c);
		else {
			cout << "Iai?aaeeuiue aeaiacii cia?aiee eee cia?aiea o?a aiaaaeaii! Io?iu cia?aiey(-10<= n <=10) " << endl;
			while (1) {
				cout << "Aaaaeoa iaiiaoi?y?uee yeaiaio eee ec io?iiai aeaiaciia: ";
				cin >> c;
				f = find(s.begin(), s.end(), c) != s.end();
				if (c <= 10 && c >= -10 && f != 1) {
					s.push_back(c);
					break;
				}
			}
		}
	}
	for (int i = 1; i < n + 1;i++)
		k *= i;
	s1.resize(k);
	for (int i = 0; i < s1.size();i++){
		for (auto it = s.begin(); it != s.end();it++) {
			s1[i].push_back(*it);
		}
		next_permutation(s.begin(), s.end());
	}
	for (int i = 0; i < s1.size();i++) {
		for (int j = 0; j < s1[i].size();j++)
			cout << s1[i][j] << " ";
		cout << endl;
	}

	system("pause");
}