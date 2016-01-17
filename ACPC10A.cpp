#include <iostream>
using namespace std;
void printGeo(int&);
void printAri(int&);
bool isGP(int&, int&, int&);
int main ()
{
  int x, y, z;
  cin >> x >>y >>z;
  while (!(x==0 && y==0 && z==0))
  {
    if (isGP(x, y, z)) 
    {
     int geo = z * (y/x); printGeo(geo); 
    }
    else
    {int ari = 2*z-y;printAri(ari);}
    cin >> x >>y >>z;
  }
  return 0;
}
bool isGP(int& x, int& y, int& z)
{
  int sum1 = z-y;
  int sum2 = y-x;
  if (sum1 == sum2) return false;
  else return true;
}
void printGeo(int& result)
{
  cout << "GP " << result << endl;
}
void printAri(int& result)
{
  cout << "AP " << result << endl;
}