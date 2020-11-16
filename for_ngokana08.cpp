#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main() {
    int N, a, dig = 0;
    int base = 27;
    stack<char> ans;
    stack<int> anan;
    cin >> N;
    while(N>0){
        a =  N%base;
        anan.push(a);
        ans.push(a+'A'-1);
        N /= base;
        dig++;
    }
    printf("%d = ", N);

    while(!anan.empty()){
        printf("%d * %d ^ %d + ", anan.top(), base, --dig);
        anan.pop();
    }
    printf("\n");
    while(!ans.empty()){
        printf("%c", ans.top());
        ans.pop();
    }
    printf("\n");
    return 0;
}
