#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double maxTriangleArea(double a, double b, double c, double d) {
    double s = (a + b + c + d) / 2.0; // Semi-perimeter
    double area1 = sqrt((s - a) * (s - b) * (s - c) * (s - d));
    double area2 = sqrt((s - a) * (s - c) * (s - d) * (s - b));
    double area3 = sqrt((s - a) * (s - b) * (s - d) * (s - c));
    double area4 = sqrt((s - a) * (s - b) * (s - c) * (s - d));
//    return max({area1, area2, area3, area4});
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double max_area = maxTriangleArea(a, b, c, d);
        cout << fixed << setprecision(2) << max_area << endl;
    }
    return 0;
}
