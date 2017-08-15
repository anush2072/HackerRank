#include <cmath>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float mealCost, tip, tax;
    cin >> mealCost >> tip >> tax ;
    tip = mealCost * ( tip / 100 );
    tax = mealCost * ( tax / 100 );
    mealCost = mealCost + tip + tax;
    
    //C++ does not have a default round() function
    int r = (mealCost > 0.0) ? (mealCost + 0.5) : (mealCost - 0.5) ;
    printf("The total meal cost is %d dollars.", r); 
    
    return 0;
}
