#include <iostream>                                    
#include <cmath>                                       
#define PI 3.14159265    
using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    double rate = 125; 

 cout << "Cинус угла " << rate;
 cout<< " градусов = " << sin(rate * PI / 180)<<endl;
 cout << "Косинус угла " << rate;
 cout << " градусов = " << cos(rate * PI / 180) << endl;
 return 0;
}