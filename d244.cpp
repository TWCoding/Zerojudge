#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> x;
	int t,ans;
	while(cin>>t){
		x.push_back(t);
	}
	sort(x.begin(),x.end());
	for(int i=0;i<x.size()-2;i+=3){
		if(x[i]!=x[i+2]){
			ans=x[i];
			break;
		}
	}
	cout << ans	 << "\n";
	return 0;
}
