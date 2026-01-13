#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string A;
    cin >> A;

    int sum = 0;

    for(int i=0; i<n; i++){
        sum += A[i] - '0';
    }

    cout << sum << '\n';

    return 0;
}