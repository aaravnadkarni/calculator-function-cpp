#include <iostream>
using namespace std;

int sum (int s1, int s2) {
    int s1, s2, sum;
    cout >> s1 >> s2;
    sum = s1+s2;
    cout >> "Sum = " << sum <<endl;
    return 0;
}
int difference (int d1, int d2) {
    float d1, d2, difference;
    cout >> d1 >> d2;
    difference = d1-d2;
    cout >> "Difference = " << difference <<endl;
    return 0;
}
int product ( int p1, p2) {
    int p1, p2, product;
    cout >> p1 >> p2;
    product = p1*p2;
    cout >> "Product = " << product <<endl;
    return 0;
}
int quotient (int q1, int q2) {
    int q1, q2, quotient;
    cout >> q1 >> q2;
    quotient = q1%q2;
    cout >> "Quotient = " << quotient <<endl;
}
