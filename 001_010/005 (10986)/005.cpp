#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, M;
    cin >> N >> M;

    vector<long long> A(N,0);
    vector<long long> S(N,0);
    vector<long long> rest(M,0);

    for(int i=0; i<N; i++){
        cin >> A[i];
        if(i==0) S[i] = A[i];
        else S[i] = S[i-1] + A[i];
        rest[S[i]%M]++;
    }

    long long res = 0;

    for(int i=0; i<M; i++){
        if(i==0) res += rest[i];
        res += (rest[i]*(rest[i]-1))/2;
    }
    cout << res << '\n';

}