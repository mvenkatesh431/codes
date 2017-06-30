#include<iostream>
using namespace std;

int fib(int n){
  if(n<=1)
    return n;
  else
    return (fib(n-1) + fib(n-2));
}

int main(int argc, char const *argv[]) {
  int n;
  cout << "Enter number : ";
  cin >> n;
  cout << n << "th fibonacci number is : "<< fib(n)<<endl;
  return 0;
}
