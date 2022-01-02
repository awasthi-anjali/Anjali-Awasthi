#include <iostream>
using namespace std;
long long  minTime(long long  a[], long long  b[], long long  n)
{
    long long  sum1 = 0, sum2 = 0;
    for (long long  i = 0; i < n; i = i + 2)
    {
        long long  j = i + 1;
        if (j < n)
        {
            sum1 += a[i] + b[j];
            sum2 += b[i] + a[j];
        }
        else
        {
            sum1 += a[i];
            sum2 += b[i];
        }
    }
    if (sum1 < sum2)
        return sum1;
    else
        return sum2;
}
int main()
{
    long long  n;
    cin >> n;
    long long  a[n], b[n];
    for (long long  i = 0; i < n; i++)
        cin >> a[i];
    for (long long  i = 0; i < n; i++)
        cin >> b[i];
    cout << minTime(a, b, n);
    return 0;
}