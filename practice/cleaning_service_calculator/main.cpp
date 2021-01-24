#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  const double large_room_cost{25};
  const double small_room_cost{10};
  const double tax{0.06};
  const int expiry{30};  // days

  int large_rooms{0};
  int small_rooms{0};

  cout << "How many large rooms you need cleaned? ";
  cin >> large_rooms;

  cout << "How many small rooms you need cleaned? ";
  cin >> small_rooms;

  double large_rooms_total{large_rooms * large_room_cost};
  double small_rooms_total{small_rooms * small_room_cost};
  double taxes{(large_rooms_total + (large_rooms_total * tax)) +
               (small_rooms_total + (small_rooms_total * tax))};
  cout << "==========================================" << endl;
  cout << "Large rooms to be cleaned: " << large_rooms << endl;
  cout << "Small rooms to be cleaned: " << small_rooms << endl;
  cout << "Cost for large rooms: $" << large_rooms * large_room_cost << " ($"
       << large_room_cost << " each)" << endl;
  cout << "Cost for small rooms: $" << small_rooms * small_room_cost << " ($"
       << small_room_cost << " each)" << endl;
  cout << "==========================================" << endl;
  cout << "Taxes: $" << taxes << " (6%)" << endl;
  cout << "==========================================" << endl;
  cout << "Total: $" << large_rooms_total + small_rooms_total + taxes << endl;

  cout << "\nEstimate valid for " << expiry << " days." << endl;

  return 0;
}
