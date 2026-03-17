#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string CoinFlip();

int main() {
   // Add more variables as needed
   int cfnum;
   srand(2);  // Unique seed

   /* Type your code here */
    cout << "Enter number of coinflips: ";
    cin >> cfnum;
    for(int i = 0; i < cfnum; i++){
        cout << CoinFlip();
    }
    
   return 0;
}

string CoinFlip(){
    if (rand()%2 == 1){
        return "Heads ";
    }
    else{
        return "Tails ";
    }
}
