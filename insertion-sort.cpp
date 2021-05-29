#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int s, k;
    for(int i = 1; i < n; i++){
        s = a[i];
        k = i;
        while(a[k - 1] > s && k > 0){
            a[k] = a[k - 1];
            k--;
        }
        a[k] = s;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
