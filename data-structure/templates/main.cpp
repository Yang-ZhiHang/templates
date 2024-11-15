#include <iostream>
using namespace std;
#include "Queue.h"
int main() {
    int n;
    cin >> n;
    Queue* Q;
    Q = initQueue(n);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        enQueue(Q, num);
    }

    return 0;
}