#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 56.75;
    double b = 72.91;
    double c = 88.50;
    double d = 26.37;
    double e = 68.51;
    double totalMoney = a + b + c + d + e;
    cout << "实际应付 " << fixed <<setprecision(2) << totalMoney << " 元" << endl;
    return 0;
}