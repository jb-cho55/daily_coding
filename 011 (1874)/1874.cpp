#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> A;
    string ans;
    
    int next = 1;

    for(int i=0; i<N; i++){
        int trg;
        cin >> trg;

        if(trg >= next){
            while(trg >= next){
                A.push_back(next);
                ans.push_back('+');
                next++;
            }
            A.pop_back();
            ans.push_back('-');
        }
        else if(trg < next){
            if(A.back() == trg){
                A.pop_back();
                ans.push_back('-');
            }
            else{
                cout << "NO" << '\n';
                return 0;
            }
        }
    }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << '\n';

    return 0;
}