#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double x_p, x_k, dx, R, x, y;
		cout << "x_p = ";cin >> x_p;
		cout << "x_k = ";cin >> x_k;
		cout << "dx = ";cin >> dx;
		cout << "R = ";cin >> R;
		cout << "-------" << endl;
		cout << "|  y  |" << endl;
		cout << "-------" << endl;

		x = x_p;
		while (x <= x_k) {
			if (x <= (-8 - R)) {
				y = R;
				cout << "y1 = " << y << endl;;
			}
			else
				if ((-8 - R < x) && (x <= R - 8)) {
					y = sqrt(R * R - (x + 8) * (x + 8)) - R;
					cout << "y2 = " << y << endl;
				}
				else
					if ((R - 8 < x) && (x <= 2)) {
						y = (2 + R) * (x + 8 - R) / (10 - R) - R;
						cout << "y3 = " << y << endl;
					}
					else
						if ((2 < x) && (x <= 6)) {
							y = 0;
							cout << "y4 = " << y << endl;
						}
						else
							if (x > 6) {
								y = (x - 6) * (x - 6);
								
							}
			cout << "|" << setw(5) << y << "|" << endl;
			x = x + dx;
		}
	cout << "-------" << endl;
	return 0;
}