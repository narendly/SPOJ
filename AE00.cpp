#include <iostream>
#include <math.h>
int main()
{
int n; std::cin>>n; int s=sqrt(n); int ans =0;
for (int a = 1; a <= s; a++) { for (int b=a+1;a*b<=n;b++)ans++; }
std::cout << ans + s;
}