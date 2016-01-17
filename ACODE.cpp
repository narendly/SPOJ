#include <iostream>
#include <string>
#include <sstream>
#include "stdio.h"
#include <map> 
using namespace std;
static unsigned int c = 0;
static map<string, unsigned int> store;

bool withinBoung(string);
void count(string, int);
string to_string(int&);
int to_int(string&);




bool withinBound(string num)
{
   int n = to_int(num);
   if (n < 1 || n>26) return 0;
   else return 1;
}

int count(string num)
{
  int ca = 0; int cb = 0;
   if (store.find(num) != store.end())
   {
     return store[num];
   }
   if(num[0] == '0') return 0;
   int len = num.length();
   if (len == 0)
   {
     return 1;
   }
   if (len >= 1)
   {
    ca = count(num.substr(1, len-1));
    //store[num.substr(1, len-1)] = c; c=0;
   }
   if (len >= 2 && withinBound(num.substr(0,2)))
   {
    cb = count(num.substr(2, len-2));
    //store[num.substr(2, len-2)] = c; c=0;
   }
   store[num] = ca+cb;
   return ca + cb;
}

void removeZeroes(string &ss)
{
  for (size_t i = 0; i < ss.length(); i++)
  {
    if (ss.at(i) == '0') 
    {
      ss.erase(i-1, 2);
    }
  }
}

string to_string(int &x)
{
  ostringstream s; s.clear(); s << x; return s.str();
}
int to_int(string &s)
{
  stringstream ss; ss.clear(); ss << s; int res; ss >> res;  return res;
}
int main ()
{
  string n; cin >> n; 
  while (n != "0")
  {
    c = 0;

    //remove zeroes
    //removeZeroes(n);
    
    /* try 1
    int len = n.length();
    for (int x = 1; x<=len; x++)
    {
      string temp =n.substr(len-x, x); 
      count(temp); store[temp] = c; c=0;
    }

    count(n); cout << c << endl;
    */
    
    /* try 2
    
    
    
    //Dynamic programming with binomial tree structure
    count(n);
    store[n] = c;
    
    */
    
    cout << count(n) << endl;

    cin >> n;
  }

  return 0;
}
 