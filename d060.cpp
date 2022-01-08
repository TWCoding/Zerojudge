#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	cout << (abs(60-n)+25)%60 << "\n";
	return 0;
}
