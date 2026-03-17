#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int coinValue, int& num, int& amountLeft);

int main()
{

  //your code goes here
  int change;
  int quarters;
  int dimes;
  int pennies;
  int leftover;
  
  cout << "Enter amount of change (1-99 cents): ";
  cin >> change;
  leftover = change;
  computeCoins(25, quarters, leftover);
  computeCoins(10, dimes, leftover);
  computeCoins(1, pennies, leftover);
  
  cout << change << " cents can be given as " << quarters << "  quarter(s) " << dimes << " dime(s) and " << pennies << " penny(pennies)." << endl;
  
  
  

return 0;
}

//implement functions
void computeCoins(int coinValue, int& num, int& amountLeft){
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
}

