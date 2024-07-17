//Caaaiea ?440
#include <iostream>
#include <locale.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
private:
	vector<string> s;
	string str;
	int num = 0;
public:
	int findKthNumber(int n, int k) {
		for (int i = 1; i <= n; i++) {
			str = to_string(i);
			s.push_back(str);
		}
		sort(s.begin(), s.end());
		k--;
		num = stoi(s[k]);
		return num;
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	int n = 0, k = 0;
	cout << "Aaaaeoa ieii?aaiea aeaiaciia [1,n]: ";
	cin >> n;
	cout << "Aaaaeoa iiia? yeaiaioa ec aeaiaciia [1,n], eioi?ue io?ii aa?ioou: ";
	cin >> k;
	Solution r;
	cout << r.findKthNumber(n, k) << endl;

	system("pause");
}