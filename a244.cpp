#include <iostream>

using namespace std;

int main(){
	long long int N,a,b,c;
	cin >> N; 
	while(N>0){  
		cin >> a >> b >> c;
		if(a==1){
			cout << b+c << "\n";
		}
		else if(a==2){
			cout << b-c << "\n";
		}
		else if(a==3){
			cout << b*c << "\n";
		}
		else{
			cout << b/c << "\n";
		}
		N--;
	}
	return 0;
}
