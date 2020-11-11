#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int a, b, s;
    
    cin >> a >> b;

    do{
        srand((unsigned)time(0));
        s = rand()%(99-1+1) + 1;
    }while((s == a) ||(s == b) || (s == (a+b)) || (s == (a-b)));
    
    cout << s << '\n';

    return 0;
}
