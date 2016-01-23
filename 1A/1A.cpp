//CoodeForces Problem 1 A
//Театральная площадь

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double n, m, a, k;
    k = 0;
    cin >> n >> m >> a;
    k = (ceil(n / a)) * (ceil(m / a));
    printf("%.0lf\n", k);
    //system("pause");
    return(0);
}