#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    queue<int> A;
    for(int i=1; i<=N; i++) A.push(i);

    while(A.size() != 1){
        A.pop();

        int tmp = A.front();
        A.pop();
        A.push(tmp);
    }

    cout << A.front() << '\n';

    return 0;
}