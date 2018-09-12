#include <iostream>
using namespace std;
int gcd(int a1, int a2);
int main()
{
   int a1, a2;
   cout << "Enter two positive integers: ";
   cin >> a1 >> a2;
   cout << "GCD of " << a1 << " & " <<  a2 << " is: " << gcd(a1, a2);
   return 0;
}
int gcd(int a1, int a2)
{
    if (a2 != 0)
       return gcd(a2, a1 % a2);
    else 
       return a1;
}

