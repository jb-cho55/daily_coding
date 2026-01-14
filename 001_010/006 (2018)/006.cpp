#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int st_index = 1;
    int end_index = 1;
    int sum = 1;
    int count = 0;

    while (end_index <= N){
        if(sum > N){
            sum -= st_index;
            st_index++;
        }
        else if(sum == N){
            count++;
            end_index++;
            sum += end_index;
        }
        else{
            end_index++;
            sum += end_index;
        }   
    }

    cout << count << '\n';
    return 0;
}