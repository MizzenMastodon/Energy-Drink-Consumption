#include <iostream>
using namespace std;

int main() { 
  int polledCustomers;
  //gets number of polled customers
  cout << "How many customers did you poll? ";
  cin >> polledCustomers; 
  //calculates and stores the percent of customers that purchased more than one a week as well as the number of those customers that purchased citrus-flavored drinks
  int percentPurchased = polledCustomers * 0.15;
  int percentCitrus = percentPurchased * 0.58;
  //outputs the information. 
  cout << "Out of " << polledCustomers << " polled customers, " << percentPurchased << " purchased one or more energy drinks per week. " << percentCitrus << " of those customers purchased citrus-flavored energy drinks. "; 

  

}