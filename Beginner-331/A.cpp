#include <iostream>

using namespace std;

int main() {
    // Read input
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;

    // Calculate the day following
    d++;
    if (d > D) {
        d = 1;
        m++;
        if (m > M) {
            m = 1;
            y++;
        }
    }

    // Output the result
    cout << y << " " << m << " " << d << endl;

    return 0;
}

