
#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int countc(int num) {
	int dl = 0;
	while (num > 0) {
		dl++;
		num /= 10;
	}
	return dl;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int low = 0, high = 0, k = 0, c = 1, t = 0, ch = 0, nch = 0, result = 0;
	while (1) {
		cout << "Aaaaeoa aeiacii cia?aiee (ia < 1 e ia > 10^9)" << endl << "Io: ";
		cin >> low;
		cout << "Ai: ";
		cin >> high;
		if (low > 0 && high <= pow(10, 9))
			break;
		else
			cout << "Iaaa?iue aaia! Iiaoi?eoa au? ?ac!" << endl;
	}

	while (1) {
		cout << "Aaaaeoa ?enei, ia eioi?ia aie?iu aaeeouny e?aneaua ?enea (io 1 ai 20): ";
		cin >> k;
		if (k > 0 && k <= 20)
			break;
		else
			cout << "Iaaa?iue aaia! Iiaoi?eoa au? ?ac!" << endl;
	}
	for (int i = low; i < high + 1; i++) {
		if (i % k == 0) {
			for (int j = 0; j < countc(i);j++) {
				t = i / c % 10;
				c *= 10;
				if (t % 2 == 0)
					ch++;
				else
					nch++;
			}
			if (nch == ch && nch != 0 && ch != 0)
				result++;
			nch = 0;
			ch = 0;
			c = 1;
		}

	}
	if (result != 0)
		cout << "Eiee?anoai e?aneauo ?enae a aeaiaciia io " << low << " ai " << high << " = " << result << endl;
	else
		cout << "E?aneauo ?enae a aeaiaciia io " << low << " ai " << high << " iao" << endl;
	system("pause");
}