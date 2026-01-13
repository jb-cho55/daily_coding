#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N,0);
    for(int i=0; i<N; i++) cin >> A[i];

    sort(A.begin(), A.end());


    int count = 0;

    for(int i=0; i<N; i++){
        int fr_index = 0;
        int end_index = N-1;

        while (fr_index < end_index){
            int sum = A[fr_index] + A[end_index];
            
            if (sum == A[i]){
                if(fr_index== i) fr_index++;
                else if(end_index == i) end_index--;
                else{
                    count++;
                    break;
                }
            }
            else if(sum > A[i]) end_index--;
            else fr_index++;
        }
    }

    cout << count << '\n';
    return 0;
}