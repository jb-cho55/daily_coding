#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Compare{
    bool operator()(int a, int b){
        int a_ref, b_ref;
        if(a<0) a_ref = -1* a;
        else a_ref = a;
        if(b<0) b_ref = -1 *b;
        else b_ref = b;

        if(a_ref == b_ref) return a > b;
        else return a_ref > b_ref;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int> , Compare> A;

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int tmp;
        cin >> tmp;

        if(tmp == 0){
            if(A.empty()) cout << '0' << '\n';
            else{
                cout << A.top() << '\n';
                A.pop();
            }
        }
        else A.push(tmp);
    }

    return 0;
}


