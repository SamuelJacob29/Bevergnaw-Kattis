#include <iostream>
#include <limits>
#include <iomanip>
#include <math.h>
constexpr auto PI = 3.1415926535897932384626434;
using namespace std;


int main() {

	while (1) {
		int Diam, Vol;
		cin >> Diam >> Vol;
		if (!Diam && !Vol) break;
		cout << setprecision(9) << fixed << pow((pow(Diam, 3)*PI / 6 - Vol) / (PI / 6), 1.0 / 3) << endl;
	}
	return 0;
}