#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N,0);
    vector<int> S(N,0);
    

    for(int i=0; i<N; i++) cin >> A[i];

    for(int i=1; i<N; i++){
        int trg = A[i];
        int index = i;
        for(int j=0; j<i; j++){
            if(trg < A[j]){
                index = j;
                break;
            }
        }
        for(int k=i; k>index; k--){
            A[k] = A[k-1];
        }
        A[index] = trg;
    }
    
    S[0] = A[0];
    int res = 0;
    for(int i=1; i<N; i++) S[i] = A[i] + S[i-1];
    for(int i=0; i<N; i++) res += S[i];
    
    cout << res;
    return 0;
}