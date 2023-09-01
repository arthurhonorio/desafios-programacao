#include <iostream>

using namespace std;

int main () {
    
    int N, a, b, c=0;
    cin >> N;
    cin >> a;
    N--;
    while(N){
        cin >> b;
        N--;
        if(b>a) c=b;
    }
    if(c>a) cout << "N\n";
    else cout << "S\n";
    
    return 0;
}
/*
N = int(input())
a = int(input())
N--
c = 0
while(N):
    b = int(input())
    N--
    if(b>a):
        c = b
if(c>a):
    print("N\n")
else:
    print("S\n")






*/

