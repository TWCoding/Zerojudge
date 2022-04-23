#include <iostream>

using namespace std;

int main(){
	string a;
	cin >> a;
	cout << a[0];
	for(int i=1;i<a.size()-1;i++){
		cout << "_" ;
	}
	cout << a[a.size()-1] << endl;
	return 0;
}
