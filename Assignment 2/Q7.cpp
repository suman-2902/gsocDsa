#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool isprime=true;
  
  cin >> n;


  if (n == 0 || n == 1) {
    isprime = false;
  }

  for (i = 2; i <=sqrt(n); i++) {
    if (n % i == 0) {
      isprime = false;
      break;
    }
  }

  if (isprime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
