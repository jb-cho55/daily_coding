#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector <int> A(n,0);
    for(int i=0; i<n; i++) cin >> A[i];

    stack <int> tmp;
    vector<int> ans(n,0);

    for(int i=0; i<n; i++){
        if(tmp.empty()) tmp.push(i);
        else{
            while(!(tmp.empty()) && (A[tmp.top()] < A[i])){
                ans[tmp.top()] = A[i];
                tmp.pop();
            }
            tmp.push(i);
        }
    }

    while(!tmp.empty()){
        ans[tmp.top()] = -1;
        tmp.pop();
    }

    for(int i=0; i<n; i++) cout << ans[i] << " ";

    return 0;

}