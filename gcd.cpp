#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a,b;
  cout << "please enter two numbers : (a<b) : ";
  cin >> a >> b;
  int gcd =0;
  for(int i=1;i<=b;i++)
  {
    if((a%i==0)&&(b%i==0))
      gcd = i;
  }
  cout << "GCD of "<< a <<" and " << b << " is : " << gcd <<endl;
  return 0;
}
