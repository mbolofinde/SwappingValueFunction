#include <iostream>
using namespace std;
void swapVals(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int *p = new int(10);
    int *q = new int(20);
    swapVals(p, q);
    cout << *p << endl;
    cout << *q << endl; 
    return 0;
}