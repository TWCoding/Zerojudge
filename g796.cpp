#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans[100] = { 0 };
    while (n > 0) {
        string a;
        cin >> a;
        int x, t;
        x = atoi(a.c_str());
        x /= 10;
        t = x / 10;
        x = x%10 + (t%10) * 10;
        ans[x]++;
        n--;
    }
    for (int i = 0; i < 100; i++) {
        if (ans[i] > 0) {
            cout << i << " " << ans[i] << "\n";
        }
    }
    return 0;
}
