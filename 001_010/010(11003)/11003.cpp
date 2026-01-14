#include <iostream>
#include <vector>
#include <deque>
using namespace std;

typedef pair<int, int> Node;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L;
    cin >> N >> L;

    vector<int> A(N,0);
    for(int i=0; i<N; i++) cin >> A[i];

    deque<Node> tmp;

    for(int i=0; i<N; i++){
        while(!tmp.empty() && A[i] < tmp.back().second){
            tmp.pop_back();
        }
        tmp.push_back(Node(i,A[i]));
        
        if(tmp.front().first < i-L+1) tmp.pop_front();

        cout << tmp.front().second << " ";
    }

    return 0;
}   