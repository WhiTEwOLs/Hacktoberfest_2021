#include <iostream>
#define EPSILON 0.0000001 // least minimum value for comparison
using namespace std;
int main()
{
    double _val=10;
    double low = 0; 
    double high = _val;
    double mid = 0; 

    while (high - low > EPSILON) {
            mid = low + (high - low) / 2; // finding mid value
            if (mid*mid > _val) {
                high = mid;
            } else {
                low = mid;
            }    
    }   
    cout<<mid;
   return 0;
}