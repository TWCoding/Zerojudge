#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	unsigned long long int a;
    while (cin >> a) {
        cout << fixed << setprecision(0) << pow(a,1.0/3.0) << endl;
    }
    return 0;
}
