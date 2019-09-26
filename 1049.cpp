#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<double> arr;
    for(int i=0; i<n; i++){
        double tmp;
        scanf("%lf", &tmp);
        arr.push_back(tmp);
    }
    double ans = 0;
    double size = n;
    for(int i=0; i<n; i++){
        double tmptms = 0;
        tmptms += i * (size-i-1);
        tmptms += size;
        ans += arr[i] * tmptms;
    }
    printf("%.2f", ans);
}


