#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S, P;
    cin >> S >> P;

    string A;
    cin >> A;

    // arr[0] = "A" , [1] =  'C', [2] = 'G', [3] = 'T'
    vector<int> check_arr(4,0);
    for(int i=0; i<4; i++) cin >> check_arr[i];

    vector<int> tmp_arr(4,0);
    int count = 0;
    bool is_make = true;

    for(int i=0; i<P; i++){
        if(A[i] == 'A') tmp_arr[0]++;
        else if(A[i] == 'C') tmp_arr[1]++;
        else if(A[i] == 'G') tmp_arr[2]++;
        else if(A[i]== 'T') tmp_arr[3]++;
    }

    for(int i=0; i<4; i++){
        if(tmp_arr[i] < check_arr[i]) is_make = false;
    }

    if(is_make) count ++;

    for(int i=1; i<=S-P; i++){
        is_make = true;

        if(A[i+P-1] == 'A') tmp_arr[0]++;
        else if(A[i+P-1] == 'C') tmp_arr[1]++;
        else if(A[i+P-1] == 'G') tmp_arr[2]++;
        else if(A[i+P-1]== 'T') tmp_arr[3]++;

        if(A[i-1] == 'A') tmp_arr[0]--;
        else if(A[i-1] == 'C') tmp_arr[1]--;
        else if(A[i-1] == 'G') tmp_arr[2]--;
        else if(A[i-1]== 'T') tmp_arr[3]--;

        for(int j=0; j<4; j++){
            if(tmp_arr[j] < check_arr[j]) is_make = false;
        }
        if(is_make) count ++;
    }

    cout << count << '\n';

    return 0;

}