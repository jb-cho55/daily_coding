#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N , M;
    cin >> N >> M;

    vector<int> S(N+1,0);
    
    for(int i=1; i<=N; i++){
        int tmp;
        cin >> tmp;
        S[i] = S[i-1] + tmp;
    }

    for(int i=0; i<M; i++){
        int st, end;
        cin >> st >> end;
        cout << S[end] - S[st-1] << '\n';
    }

    return 0;
}