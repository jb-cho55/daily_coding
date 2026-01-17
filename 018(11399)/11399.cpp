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

    int S[N];

    for(int i=0; i<N; i++){
        int min = A[i];
        int min_index = i;
        for(int j=i+1; j<N; j++){
            if(min > A[j]){
                min = A[j];
                min_index = j;
            }
        }
        int tmp = A[i];
        A[i] = min;
        A[min_index] = tmp;
    }

    S[0] = A[0]; 
    for(int i=1; i<N; i++) S[i] = S[i-1] + A[i];
    
    int res = 0;
    for(int i=0; i<N; i++) res += S[i];

    cout << res << '\n';

    return 0;
}