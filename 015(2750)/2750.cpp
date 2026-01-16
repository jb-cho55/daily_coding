#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];

    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            int tmp = A[j];
            if(A[j] > A[j+1]){
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }

    for(int i=0; i<N; i++) cout << A[i] << '\n';

    return 0;
}