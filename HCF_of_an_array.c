#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b);

int main() {
    int n;
    // int h = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int h = 0;
    for(int i = 0; i < n; i++) {
        h = hcf(arr[i],h);
    }
    cout << h ;
}

int hcf(int a, int b) {
    int h = a;
    int l = b;
    if(a < b){
        h = b;
        l = a;
    }
    for(int i = h; i > 0; i--) {
        if((h%i == 0)&&(l%i == 0))return i;
    }return -1;
}