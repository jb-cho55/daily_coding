#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &A, int S, int E);
void QuickSelect(vector<int> &A, int st, int end, int k);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int k = K - 1;                  
    QuickSelect(A, 0, N - 1, k);

    cout << A[k];
    return 0;
}

void QuickSelect(vector<int> &A, int st, int end, int k) {
    if (st >= end) return;          

    int p = partition(A, st, end);

    if (p == k) return;
    else if (k < p) QuickSelect(A, st, p - 1, k);
    else QuickSelect(A, p + 1, end, k);
}

int partition(vector<int> &A, int S, int E) {
    int M = (S + E) / 2;
    swap(A[S], A[M]);               
    int pivot = A[S];

    int i = S + 1;
    int j = E;

    while (true) {
        while (i <= E && A[i] < pivot) i++;
        while (j >= S + 1 && A[j] > pivot) j--;

        if (i >= j) break;

        swap(A[i], A[j]);
        i++;                        
        j--;
    }

    swap(A[S], A[j]);               
    return j;
}
