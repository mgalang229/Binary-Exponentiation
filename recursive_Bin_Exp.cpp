#include <iostream>
using namespace std;

#define ll long long

int power(int a, int b) {
    if(b==0)
        return 1;
    int tmp=power(a, b/2);
    int res=tmp*tmp;
    if(b%2==1) res*=a;
    return res;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << "\n";
}
