#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> A(N,0);
    for(int i=0; i<N; i++) cin >> A[i];

    vector<int> NGE(N,0);
    stack<int> S;

    for(int i=0; i<N; i++){
        while(!S.empty() && A[S.top()] < A[i]){
            NGE[S.top()] = A[i];
            S.pop();
        }
        S.push(i);
    }

    while(!S.empty()){
        NGE[S.top()] = -1;
        S.pop();
    }

    for(int i=0; i<N; i++) cout << NGE[i] << " ";

    return 0;
}