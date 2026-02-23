#include <iostream>
#include <vector>
using namespace std;

static long long res = 0;

void MergeSort(vector<int> &A, vector<int> &tmp, int st, int end);


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N,0);
    vector<int> tmp(N,0);
    for(int i=0; i<N; i++) cin >> A[i];

    MergeSort(A,tmp, 0, N-1);

    cout << res;

    return 0;
}

void MergeSort(vector<int> &A, vector<int> &tmp, int st, int end){
    if(end - st < 1 ) return;

    int m = st + (end-st)/2;
    MergeSort(A,tmp,st, m);
    MergeSort(A,tmp,m+1, end);

    int input_index = st;
    int index1 = st;
    int index2 = m+1;
    for(int i=input_index; i<=end; i++) tmp[i] = A[i];

    while(index1<=m && index2 <=end){
        if(tmp[index1] <= tmp[index2]){
            A[input_index] = tmp[index1];
            index1++;
            input_index++;
        }
        else{
            A[input_index] = tmp[index2];
            index2++;
            input_index++;
            res += (m - index1 + 1);
        }
    }
    while(index1 <= m){
        A[input_index] = tmp[index1];
        input_index++;
        index1++;
    }
    while(index2 <= end){
        A[input_index] = tmp[index2];
        input_index++;
        index2++;
    }

}