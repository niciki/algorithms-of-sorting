#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int s, k, p, tmp;
    for(int i = 0; i < n - 1; i++){
        s = a[i];
        k = i;
        while(k < n){
            if(a[k] < s){
                p = k;
                s = a[k];
            }
            k++;
        }
        tmp = a[i];
        a[i] = a[p];
        a[p] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
