//Caaaiea ?15
#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	vector <vector<int>> s;
	int l = 0, l1 = 0;
	vector <int> num;// aiaaaeou io?iua cia?aiey ia iaiuoa 3
	cout << "Aaaaeoa eiee?anoai yeaiaioia (ia < 3 e ia  > 3000): ";
	cin >> l;
	if (l < 3 || l > 3000) {
		cout << "Iaaiionoeiia eiee?anoai!";
		while (1) {
			cout << "Aaaaeoa eiee?anoai yeaiaioia (ia < 3 e ia  > 3000): ";
			cin >> l;
			if (l >= 3 && l <= 3000)
				break;
		}
	}
	cout << "Aaaaeoa " << l << " cia?aiee: ";
	for (int i = 0; i < l; i++) {
		cin >> l1;
		num.push_back(l1);
	}

	int n = 0, k = 1;
	for (auto it1 = num.begin();it1 < num.end() - 2;it1++) {
		for (auto it2 = it1 + 1;it2 < num.end() - 1;it2++) {
			for (auto it3 = it2 + 1;it3 < num.end();it3++) {
				if ((*it1 + *it2 + *it3) == 0) {
					s.resize(k);
					s[n].push_back(*it1);
					s[n].push_back(*it2);
					s[n].push_back(*it3);
					n++;
					k++;
				}
			}
		}
	}
	if (s.size() > 1) {
		for (int i = 0; i < s.size();i++) {//ni?oe?iaea ii aic?anoaie?
			for (int j = 0; j < s[i].size();j++) {
				sort(begin(s[j]), end(s[j]));
			}
		}
		for (int i = 0; i < s.size() - 1;i++) {
			for (int j = i + 1; j < s.size();j++) {
				if (s[i] == s[j]) {
					s[j].clear();
				}

			}
		}
	}
	if (s.size() != 0) {
		cout << "O?eieaou: " << endl;
		for (int i = 0; i < s.size();i++) {//auaia yeaiaioia
			for (int j = 0; j < s[i].size();j++) {

				cout << s[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
		cout << "Iiaoiayueo o?eieaoia ia iaeaaii." << endl;
	system("pause");

}