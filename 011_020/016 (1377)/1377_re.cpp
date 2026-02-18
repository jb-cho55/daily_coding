#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int , int> Node;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector <Node> A(N);
    
    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        A[i] = Node(tmp, i);
    }

    sort(A.begin() , A.end());

    int result = 0;
    for(int i=0; i<N; i++){
        if(A[i].second - i + 1 > result) result = A[i].second - i + 1;
    }

    cout << result << '\n';

    return 0;
}
