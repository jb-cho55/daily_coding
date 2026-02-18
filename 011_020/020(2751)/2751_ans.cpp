#include <iostream>
#include <vector>
using namespace std;

void MergeSort(vector<int> &A, vector<int> &tmp , int S, int E);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A(N,0);
    vector<int> tmp(N,0);

    for(int i=0; i<N; i++) cin >> A[i];
    
    MergeSort(A, tmp, 0, N-1);
    for(int i=0; i<N; i++) cout << A[i] << '\n';

    return 0;
}

void MergeSort(vector<int> &A, vector<int> &tmp, int S, int E){
    if (E-S < 1) return;

    int m = S + (E-S)/2;
    MergeSort(A,tmp,S, m);
    MergeSort(A,tmp, m+1, E);

    for(int i=S; i<=E; i++) tmp[i] = A[i];

    int k = S;
    int index1 = S;
    int index2 = m+1;

    while(index1 <=m && index2 <=E){
        if(tmp[index1] > tmp[index2]){
            A[k] = tmp[index2];
            index2++;
            k++;
        }
        else{
            A[k] = tmp[index1];
            index1++;
            k++;
        }
    }
    while(index1 <= m){
        A[k] = tmp[index1];
        k++;
        index1++;
    }
    while(index2 <= E){
        A[k] = tmp[index2];
        k++;
        index2++;
    }
}