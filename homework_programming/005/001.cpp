#include <iostream>
#include <cmath>
using namespace std;
#define EPS 1E-10


int main()
{
  double a, b, h;
  cout << "Enter [a, b], h\n";
  cin >> a >> b >> h;

  double x = a;

  while (x < b + h)
  {
    double sum = 0;
    for (int k = 0;; k++)
    {
      double m = 1;
      for (int i = 1; i <= (2 * k + 1); i++) m *= i;

      double t = pow( -1, k + 1 ) * pow(x, 2 * k - 1)/((2*k-1)*m);

      sum += t;
      if (abs(t) < EPS) break;

    } 
    cout << " x: " << x << " :" << " sum : " << sum << '\n';
    x += h;
  } 
  

  return 0;
}