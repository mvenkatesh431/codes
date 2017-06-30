#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if(b==0)
    return a;

  int reminder = a%b;
  return gcd(b, reminder);

}
int main(int argc, char const *argv[]) {
  int a,b;
  cout << "please enter two numbers : (a<b) : ";
  cin >> a >> b;
  cout << "GCD of " << a << " and " << b << " is : " << gcd(a,b) <<endl;
  return 0;
}
