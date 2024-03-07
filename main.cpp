#include <iostream>
using std::cout;
using std::cin;


int main() {


int totalseats{0};
int purchasedtickets{0};
int tickets{0};
int avaliabletickets{0};

  
cout << "Welcome to your movie theater. Please enter the amount of seats you would like to have:  ";
  cin >> totalseats;
  cout << "\n";


  avaliabletickets = totalseats;


while (purchasedtickets < totalseats) {
  
 
  
  cout << "Hello customer, how many tickets would you like to buy? ";
    cin >> tickets; 
   cout << "\n";

if (tickets <= avaliabletickets) {
  cout << "Thank you for your purchase! You have purchased " << tickets << " tickets.\n";
  purchasedtickets = purchasedtickets + tickets;
  avaliabletickets = totalseats - purchasedtickets;
  cout << "There are " << avaliabletickets << " avaliable seats.\n";
  
  
    } else if (tickets > avaliabletickets) {
  cout << "Sorry, we do not have that many seats avaliable. There are only " << avaliabletickets << " for purchase.\n";
  
    } else if (tickets == avaliabletickets) {
  cout << "Thank you for purchase, there are no more seats avaliable.\n";
  purchasedtickets = purchasedtickets + tickets;
  avaliabletickets = totalseats - purchasedtickets;
  
    }

  if (avaliabletickets == 0) {
    cout << "We have sold out all of our tickets! The box office is closed!\n";
  }
  
 } 
  
}