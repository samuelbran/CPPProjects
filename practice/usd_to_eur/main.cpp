#include <iostream>
using namespace std;

int main() {
  const double usd_per_eur{1.19};

  cout << "Welcome to the EUR to USD conversion tool" << endl;
  cout << "Enter the value in EUR: ";

  double eurs{0.0};
  double dollars{0.0};
  cin >> eurs;

  dollars = eurs * usd_per_eur;

  cout << eurs << " euros is equivalent to " << dollars << " dollars." << endl;

  cout << endl;
  return 0;
}
