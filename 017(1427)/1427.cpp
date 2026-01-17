#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin >> N;

    vector<int> A;

    for(int i=0; i<N.size(); i++) A.push_back( N[i] - '0');

    

    for(int i=0; i<A.size(); i++){
        int max = A[i];
        int max_index = i;
        for(int j=i+1; j<A.size(); j++){
            if(max < A[j]){
                max = A[j];
                max_index = j;
            }
        }
        int tmp = A[i];
        A[i] = max;
        A[max_index] = tmp;
    }

    for(int i : A) cout << i;

    return 0;
}