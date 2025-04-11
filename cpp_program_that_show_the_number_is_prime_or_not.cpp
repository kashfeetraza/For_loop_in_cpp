#include <iostream>
using namespace std;

int main()
{
    int n = 36;
    bool val = true;
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0)
        {
            // isprime = false;
            cout<<" is not prime";
            break;
        }else{
            cout<<" is prime";
            break;
        }
    }
    // cout << n << (val ? " is Prime " : " is not prime") << endl;

    return 0;
}
// the comment line are shown the other way to discribe and run this code;