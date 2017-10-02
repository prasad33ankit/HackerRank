

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double ss = 0;
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        double v;
        cin >> v;
        s += v;
        ss += v * v;
    }
    cout << fixed << setprecision(1) << sqrt((ss - s * s/n)/n) << endl;
    return 0;
}
