#include <iostream>
using namespace std;

int main()
{
  int purchase;
  int prefer;
  purchase= 16500 * .15;
  prefer= purchase * .58;
  cout << "Out of 16500 customers the amount that at least purchased 1 energy drink was: " << purchase << endl; 
  cout << "Out of those customers the number that prefered citrust flavored energy drinks was: " << prefer << endl; 
}