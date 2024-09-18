#include <iostream>
using namespace std;

int main() { 
  int polledCustomers = 16500;
  int percentPurchased = polledCustomers * 0.15;
  int percentCitrus = percentPurchased * 0.58; //variables defined with information given in the problem statement

  cout << "Out of " << polledCustomers << " polled customers, " << percentPurchased << " purchased one or more energy drinks per week. " << percentCitrus << " of those customers purchased citrus-flavored energy drinks. "; //outputs the information. 

  

}