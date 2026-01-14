#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> A(n,0);
    int max = -1;
    for(int i=0; i<n; i++) 
    {
        cin >> A[i];
        if(A[i] > max) max = A[i];
    }

    float avg =0;
    float sum =0;
    for(int i=0; i<n; i++){
        avg += (float)A[i]/max*100/ n;
    }

    cout << avg << '\n';

    return 0;
}
