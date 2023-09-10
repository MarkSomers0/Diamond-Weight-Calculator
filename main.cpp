#include <iostream>
#include <string>
using namespace std;

int main ()
{
const float pi = 3.14159;
const float dsg = 3.52;
// dsg is specific gravity of diamond or density of diamond.
float D, R, H, Vcrown, Vpavillion, Hcrown, Hpavillion;
cout << "What is the diamond's diameter in millimeters: ";
// The diamond's diameter is 'D'
cin >> D;
Hpavillion = D*.43;
// Hpavillion is the height of the pavillion cone or bottom cone.
H = D*.61;
// H is total height of diamond.
R = D/2;
cout << "Height of diamond is: "<< H << endl;
cout << "Radius at gem's girdle is: "<< R << endl;
Vcrown = (1.0/3.0)*pi*(R*R)* Hcrown;
Vpavillion = (1.0/3.0)*pi*(R*R)* Hpavillion;
// cout << "The volume of the crown of the diamond is: " << Vcrown << "millimeters cubed." << end;
cout << "The volume of the pavillion or bottom cone of the diamond is: " << Vpavillion << " millimeters cubed." << endl;
return 0;
}
