#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n,i;
  cout << "Enter number : ";
  cin >> n;

  int fib[n+1];

  fib[0] = 0;
  fib[1] = 1;

  for(i=2; i<=n; i++)
    fib[i] = fib[i-1]+fib[i-2];

  cout << n << "th fibonacci number is : "<< fib[n]<<endl;
  return 0;
}
