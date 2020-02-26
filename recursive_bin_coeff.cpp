#include <bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int k)
{
    // Base Cases
    if (k == 0 || k == n)
        return 1;

    // Recur
    return binomialCoeff(n - 1, k - 1) +
                binomialCoeff(n - 1, k);
}

/* Driver code*/
int main()
{
    int n, k;
    cin>>n>>k;
    cout << "Value of C("<<n<<", "<<k<<") is " << binomialCoeff(n, k);
    return 0;
}  
