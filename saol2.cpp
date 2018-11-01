#include <iostream>

using namespace std;
int main()
{int N,X,T,Batas;
N = 79;
Batas = 79 + 100;
X = 20;
T = 79;
while( T <= Batas)
    {   T = T + X;
        X = X + 10;

    }
    cout << T;

}
