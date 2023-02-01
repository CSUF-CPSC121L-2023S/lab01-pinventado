#include <iomanip>
#include <iostream>

int main() {
  const double TAX_RATE = 0.075;
  double mealCost, tipPercentage, tip, taxes, total;

  std::cout << "Please input meal cost: ";
  std::cin >> mealCost;
  std::cout << "Please input tip percentage: ";
  std::cin >> tipPercentage;
  tipPercentage /= 100;
  tip = mealCost * tipPercentage;
  taxes = mealCost * TAX_RATE;
  total = mealCost + tip + taxes;
  std::cout << "\nRestaurant Bill\n";
  std::cout << "====================\n";
  std::cout << "Subtotal: $" << std::fixed << std::setprecision(2) << mealCost
            << std::endl;
  std::cout << "Taxes: $" << taxes << std::endl;
  std::cout << "Tip: $" << tip << std::endl;
  std::cout << "====================\n";
  std::cout << "Total: $" << total << std::endl;
  return 0;
}
