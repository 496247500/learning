//structptr.cc  -- functions with pointer to structure arguments
#include <iostream>
#include <cmath>
struct polar{
  double distance;
  double anger;
};
struct rect{
  double x;
  double y;
};
void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pad);
int main(){
  using namespace std;
  rect rplace;
  polar pplace;
  cout << "Enter the x and y values: ";
  while((cin >> rplace.x >> rplace.y)){
    rect_to_polar( &rplace, &pplace);
    show_polar(&pplace);
    cout << "Next two numbers (q to quit)";
  }
  cout << "Done.\n";
  return 0;
}
void show_polar(const polar* pad){
  using namespace std;
  const double Rad_to_deg = 57.29577951;
  cout << "distance = " << pad->distance << endl;
  cout << "anger = " << pad->anger * Rad_to_deg;
  cout << " degrees\n";
}
void rect_to_polar(const rect* pxy, polar* pda){
  using namespace std;
  pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
  pda->anger = atan2(pxy->y, pxy->x);
}
