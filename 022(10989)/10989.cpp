#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N;
    cin >> N;

    vector<long long> A(N,0);
    for(int i=0; i<N; i++) cin >> A[i];

    vector<queue<long long>> tmp(10);

    for(int i=0; i<5; i++){
        int exp = 1;
        for(int s=0; s<i; s++) exp*=10;

        for (int j=0; j<N; j++){
            if(i!=0){
                tmp[(A[j] / exp) % 10].push(A[j]);
            }
            else tmp[A[j] % 10].push(A[j]);
        }

        int index = 0;
        for(int k=0; k<10; k++){
            while(!tmp[k].empty()){
                long long val;
                val = tmp[k].front();
                A[index] = val;
                tmp[k].pop();
                index++;
            }
        }
    }

    for(int i=0; i<N; i++) cout << A[i] << '\n';

    return 0;

}