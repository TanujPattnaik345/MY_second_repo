#include <iostream>
using namespace std;
int main()
{
    int n;
    int a, b, p;
    cin >> n;
    while (n--)
    {
        int sum1 = 0;
        int sum2 = 0;
        cin >> a >> b;
        cin >> p;
        int arr[p][2];
        for (int i = 0; i < p; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        for (int i = 0; i < p; i++)
        {

            sum1 = sum1 + arr[i][0] * a + arr[i][1] * b;

            sum2 += arr[i][0] * b + arr[i][1] * a;
        }
        cout << min(sum1, sum2) << endl;
    }
}