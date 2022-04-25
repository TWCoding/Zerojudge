#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x[201];
	x[1] = 1;
	for(int i=2;i<201;i++){
        x[i] = x[i - 1] + pow(i, 2) - i + 1;
    }
    int t;
    cin >> t;
    cout << x[t] << endl;
    return 0;
}
