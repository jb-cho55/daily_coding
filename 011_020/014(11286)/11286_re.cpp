#include <iostream>
#include <queue>
using namespace std;

struct compare{
    bool operator()(int o1, int o2){
        int a = abs(o1);
        int b = abs(o2);

        if(a == b) return o1 > o2;
        else return a > b;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int ,vector<int>, compare> myqueue;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 0){
            if(!myqueue.empty()){
                cout << myqueue.top() <<'\n';
                myqueue.pop();
            }
            else cout << '0' << '\n'; 
        }
        else{
            myqueue.push(tmp);
        }
    }

    return 0;
}