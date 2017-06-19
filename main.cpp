#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int square;
    for(int i=1;i<=20;i++){
        square = i*i;
        cout <<"Square number of "<<i<<" is "<<"="<<i<<"*"<<i<<"="<<square;
        cout <<endl;
    }
    return 0;
}
