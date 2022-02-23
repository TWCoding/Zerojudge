#include <iostream>

using namespace std;

int main(){
	string a;
	cin >> a;
	int t=0;
	for(int i=0;i<a.size();i++){
		if(a[i]!=a[a.size()-1-i]){
			cout << "no" << endl;
			t++;
			break;
		}
	}
	if(t==0){
		cout << "yes" << endl;
	}
	return 0;
}
