#include <iostream>
using namespace std;
// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int price = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
      // Declare variables for the amount of money that the user enters,
    // along with the change that is to be returned to them.
    int money_entered, change;

    // Make sure that monetary values we output are formatted with
    // two digits after the decimal point.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Collect money from the user
    money_entered = accept_money();

    // Figure out how much change to return
    change = compute_change(money_entered);

    // Dispense the twinkie
    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change/100.0 << endl;

    return 0;
}

int accept_money()
{
  //write your code d,q, d,n
  int money = 0;
  string hold;
  cout << "It costs $3.50 (350 cents) for a deep-fried twinkie." << endl;
  while (money < price){
      cout << "Enter coin input: ";
      cin >> hold; 
      if (hold == "dollar"){
          money = money + 100;
      }
      else if (hold == "quarter"){
          money = money + 25;
      }
      else if (hold == "dime"){
          money = money + 10;
      }
      else if (hold == "nickel"){
          money = money + 5;
      }
      cout << "Current Total (in cents): " << money << " cents" << endl;
  }
  return money;
}

int compute_change(int total_paid) 
{
//write your code
return total_paid - price;
}


