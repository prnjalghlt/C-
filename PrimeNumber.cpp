#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int is_prime = 1;
    if (n == 1)
    {
        is_prime = 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime == 1)
        cout << "Prime";
    else
        cout << "Not Prime";
}
