#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> A(N,0);
    for(int i=0; i<N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    
    int st_index = 0;
    int end_index = N-1;
    int count = 0;

    while (end_index > st_index){
        int sum = A[st_index] + A[end_index];

        if(sum == M){
            count++;
            st_index++;
        }
        else if(sum > M) end_index--;
        else st_index++;
    }

    cout << count << '\n';
    
    return 0;
}